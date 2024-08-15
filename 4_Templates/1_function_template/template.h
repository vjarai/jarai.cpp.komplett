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

