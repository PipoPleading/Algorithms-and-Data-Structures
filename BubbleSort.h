#pragma once
#include <vector>
int currentNumber = 0;
bool hasChanged;
std::vector<int> Swap(std::vector<int> numbers, int position)
{
	if (numbers.at(position) > numbers.at(position + 1))
	{
		currentNumber = numbers.at(position);
		numbers.at(position) = numbers.at(position + 1);
		numbers.at(position + 1) = currentNumber;
		hasChanged = true;
	}
	return numbers;
}
std::vector<int> BubbleSort(std::vector<int> numbers)
{
	if (numbers.empty() == true)
	{
		numbers.resize(1);
		numbers.at(0) = 0;
		return numbers;
	}
	do 
	{
		hasChanged = false;
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			numbers = Swap(numbers, i);
		}
		std::cout << "/n    " + numbers.at(1);
	}
	while (hasChanged);
	return numbers;
}
