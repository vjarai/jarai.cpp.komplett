#pragma once

class FilterFunctor
{
public:
	FilterFunctor(int filterValue): filterValue_(filterValue)
	{
		
	}

	bool operator()(int item) const
	{
		return item == filterValue_;
	}

private:
	int filterValue_;
};

