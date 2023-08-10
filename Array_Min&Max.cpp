#include <iostream>

int main() 
{
  int arr[] = { 5, 3, 6, 15, 2, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bool swapped = false;

	std::cout << "Массив:";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

    // сортируем
	do
	{
		swapped = false;
		for (int i = 1; i < size; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

    // выводим 1-й
	std::cout << "Минимальный элемент: ";
	std::cout << arr[0];
	
	std::cout << "\n";
	
	// выводим последний
	std::cout << "Максимальный элемент: ";#include <iostream>

int main() 
{
  int arr[] = { 5, 3, 6, 15, 2, 9, 27, 57, 234, 38, 150 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bool swapped = false;

	std::cout << "Массив: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

    // сортируем
	do
	{
		swapped = false;
		for (int i = 1; i < size; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

    // выводим 1-й
	std::cout << "Минимальный элемент: ";
	std::cout << arr[0];
	
	std::cout << "\n";
	
	// выводим последний
	std::cout << "Максимальный элемент: ";
	std::cout << arr[size - 1];

	return 0;
} 
	std::cout << arr[size - 1];

	return 0;
} 