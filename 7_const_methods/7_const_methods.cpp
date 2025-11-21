// Const Correctness - Best Practices for Using const in C++

/*
Const correctness is a programming principle in C++ that ensures that:
1. Objects that should not be modified are marked as const
2. Member functions that don't modify object state are marked as const
3. Function parameters that won't be modified are marked as const
4. Return values that shouldn't be modified are marked as const

Benefits:
- Prevents accidental modifications
- Enables compiler optimizations
- Makes code intent clearer
- Allows const objects to call only const methods
*/

#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string owner;
    double balance;
    mutable int accessCount; // mutable allows modification even in const methods

public:
    // Constructor
    BankAccount(const std::string& ownerName, double initialBalance)
        : owner(ownerName), balance(initialBalance), accessCount(0)
    {
    }

    // Const member function - doesn't modify object state
    // Can be called on const objects
    double getBalance() const
    {
        accessCount++; // OK: mutable member can be modified in const method
        return balance;
    }

    // Const member function returning const reference
    const std::string& getOwner() const
    {
        return owner;
    }

    // Non-const member function - modifies object state
    // Cannot be called on const objects
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        }
    }

    // Non-const member function
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
        }
    }

    // Const member function
    void printStatement() const
    {
        std::cout << "Account Owner: " << owner << std::endl;
        std::cout << "Balance: $" << getBalance() << std::endl;
        std::cout << "Access Count: " << accessCount << std::endl;
    }

    // Overloaded methods - const and non-const versions
    std::string& getOwnerMutable()
    {
        return owner;
    }

    const std::string& getOwnerConst() const
    {
        return owner;
    }
};

// Function with const reference parameter - efficient (no copy) and safe
void displayAccount(const BankAccount& account)
{
    std::cout << "\n--- Account Information ---" << std::endl;
    account.printStatement(); // OK: calling const method
    // account.deposit(100); // ERROR: cannot call non-const method on const reference
}

// Function with const pointer parameter
void displayAccountPtr(const BankAccount* account)
{
    if (account != nullptr)
    {
        std::cout << "\n--- Account via Pointer ---" << std::endl;
        account->printStatement(); // OK: calling const method
    }
}

// Function returning const reference - prevents modification of returned value
const BankAccount& getAccountWithHigherBalance(const BankAccount& acc1, const BankAccount& acc2)
{
    return (acc1.getBalance() > acc2.getBalance()) ? acc1 : acc2;
}



int main()
{
    std::cout << "=== Const Correctness Example ===" << std::endl;

    // Non-const object - can call both const and non-const methods
    BankAccount account1("Alice", 1000.0);
    account1.deposit(500.0);        // OK: non-const method
    account1.withdraw(200.0);       // OK: non-const method
    std::cout << "Balance: $" << account1.getBalance() << std::endl; // OK: const method

    // Const object - can only call const methods
    const BankAccount account2("Bob", 2000.0);
    std::cout << "\nConst account balance: $" << account2.getBalance() << std::endl; // OK: const method
    // account2.deposit(100); // ERROR: cannot call non-const method on const object
    account2.printStatement(); // OK: const method

    // Using const references
    displayAccount(account1);
    displayAccount(account2);

    // Using const pointers
    displayAccountPtr(&account1);

    // Comparing accounts
    const BankAccount& richer = getAccountWithHigherBalance(account1, account2);
    std::cout << "\nAccount with higher balance belongs to: " << richer.getOwner() << std::endl;


    std::cout << "\n=== Key Takeaways ===" << std::endl;
    std::cout << "1. Mark member functions as const if they don't modify state" << std::endl;
    std::cout << "2. Use const references for parameters to avoid copies" << std::endl;
    std::cout << "3. Const objects can only call const member functions" << std::endl;
    std::cout << "4. Use 'mutable' for members that need to change in const methods" << std::endl;
    std::cout << "5. const int* = pointer to const, int* const = const pointer" << std::endl;

    return 0;
}
