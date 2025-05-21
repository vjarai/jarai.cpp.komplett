#pragma once

template <typename T>
T& maximum(T& x, T& y)
{
	return x > y ? x : y;
}


template <typename T>
void tausche(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

// Ab C++20 ist auch auto möglich als typ für function templates
void tausche_modern20(auto & x, auto& y)
{
	auto temp = x;
	x = y;
	y = temp;
}

