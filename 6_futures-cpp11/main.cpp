#include <iostream>
#include <future>
#include <thread>
#include <vector>
#include <chrono>
#include <algorithm>

struct Coffee {};
struct Egg {};
struct Bacon {};
struct Toast {};
struct Juice {};

Coffee PourCoffee() {
    std::cout << "Pouring coffee" << std::endl;
    return Coffee();
}

Juice PourJuice() {
    std::cout << "Pouring orange juice" << std::endl;
    return Juice();
}

void ApplyButter(Toast&) {
    std::cout << "Putting butter on the toast" << std::endl;
}

void ApplyJam(Toast&) {
    std::cout << "Putting jam on the toast" << std::endl;
}

Toast ToastBread(int slices) {
    for (int slice = 0; slice < slices; ++slice) {
        std::cout << "Putting a slice of bread in the toaster" << std::endl;
    }
    std::cout << "Start toasting..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Remove toast from toaster" << std::endl;
    return Toast();
}

Toast MakeToastWithButterAndJam(int number) {
    Toast toast = ToastBread(number);
    ApplyButter(toast);
    ApplyJam(toast);
    return toast;
}

Bacon FryBacon(int slices) {
    std::cout << "putting " << slices << " slices of bacon in the pan" << std::endl;
    std::cout << "cooking first side of bacon..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    for (int slice = 0; slice < slices; ++slice) {
        std::cout << "flipping a slice of bacon" << std::endl;
    }
    std::cout << "cooking the second side of bacon..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Put bacon on plate" << std::endl;
    return Bacon();
}

Egg FryEggs(int howMany) {
    std::cout << "Warming the egg pan..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "cracking " << howMany << " eggs" << std::endl;
    std::cout << "cooking the eggs ..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Put eggs on plate" << std::endl;
    return Egg();
}

int main() {

    Coffee cup = PourCoffee();

    // Synchrones Frühstück zubereiten
    //Egg egg = FryEggs(2);
    //Bacon bacon = FryBacon(3);
    //Toast toast = MakeToastWithButterAndJam(2);

    std::cout << "coffee is ready" << std::endl;

    // Asynchrones Frühstück zubereiten
    auto eggsFuture = std::async(std::launch::async, FryEggs, 2);
    auto baconFuture = std::async(std::launch::async, FryBacon, 3);
    auto toastFuture = std::async(std::launch::async, MakeToastWithButterAndJam, 2);

    auto egg = eggsFuture.get();
    auto bacon = baconFuture.get();
    auto toast = toastFuture.get();

    std::cout << "eggs are ready" << std::endl;
    std::cout << "bacon is ready" << std::endl;
    std::cout << "toast is ready" << std::endl;

    std::cout << "Pouring orange juice" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    Juice oj = PourJuice();
    std::cout << "oj is ready" << std::endl;
    std::cout << "Breakfast is ready!" << std::endl;

    return 0;
}
