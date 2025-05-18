#pragma once

#include <iostream>

template <typename T>
class IndexCheckingArray
{
private:
	T* ptr_internal_array_;
	int size_;

public:
	IndexCheckingArray(int size)
	{
		ptr_internal_array_ = new T[size];	
		size_ = size;

		for (int i = 0; i < size_; i++) // internes Array vorbelegen
			ptr_internal_array_[i] = T();

		std::cout << "Array created..." << std::endl;
	}

	~IndexCheckingArray()
	{
		delete[] ptr_internal_array_;
		std::cout << "Array deleted..." << std::endl;
	}

	T& operator[](int index)
	{
		if (index >= size_ || index < 0)
		{
			throw std::runtime_error("Index ausserhalb des gueltigen Bereichs");
		}

		return ptr_internal_array_[index];
	}

	int count() const { return size_; }

	// Automatisch generierte Memberfunktionen sicherheitshalber verbieten
	IndexCheckingArray(const IndexCheckingArray&) = delete;
	IndexCheckingArray& operator=(const IndexCheckingArray&) = delete;

	// Iteratoren begin() und end() ermoeglichen for_each schleife
	T* begin() const { return ptr_internal_array_; }
	T* end() const { return ptr_internal_array_ + size_; }
};


