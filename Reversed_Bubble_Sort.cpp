#include <iostream>

int main() 
{
  int arr[] = { 5, 3, 6, 15, 2, 9, 27, 57, 234, 38, 150 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bool swapped = false;

	std::cout << "До сортировки:";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	do
	{
		swapped = false;
		for (int i = 1; i < size; i++)
		{
			if (arr[i - 1] < arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	std::cout << "После сортировки:";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
} 