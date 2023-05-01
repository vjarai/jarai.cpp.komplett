#pragma once

#include <iostream>

template <typename T>
class IndexCheckingArray
{
private:
	T* ptr_internal_array_;
	int count_;

public:
	IndexCheckingArray(int count)
	{
		ptr_internal_array_ = new T[count];	
		count_ = count;

		for (int i = 0; i < count_; i++) // internes Array vorbelegen
			ptr_internal_array_[i] = 0;

		std::cout << "Array created..." << std::endl;
	}

	~IndexCheckingArray()
	{
		delete[] ptr_internal_array_;
		std::cout << "Array deleted..." << std::endl;
	}

	T& operator[](int index)
	{
		if (index >= count_ || index < 0)
		{
			throw std::exception("Index ausserhalb des gueltigen Bereichs");
		}

		return ptr_internal_array_[index];
	}

	int count() const { return count_; }

	// Automatisch generierte Memberfunktionen sicherheitshalber verbieten
	IndexCheckingArray(const IndexCheckingArray&) = delete;
	IndexCheckingArray& operator=(const IndexCheckingArray&) = delete;

	// Iteratoren begin() und end() ermoeglichen for_each schleife
	T* begin() const { return ptr_internal_array_; }
	T* end() const { return ptr_internal_array_ + count_; }
};


