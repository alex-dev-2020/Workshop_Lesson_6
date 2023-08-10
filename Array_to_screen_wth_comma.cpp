
#include <iostream>
#include <stdlib.h>

int main()
{
  
  // объявляем  массив
    int arr_int[10];
  
  // заолняем в цикле псевдослучайными  числами 
    for (int i = 0; i < 10; i++)
    {
        // делим на 10 ^ 6 для удобства визуального всоприятия 
        arr_int[i] = rand() / 1000000;
    } 

    // обходим  созданный, ввводим через "," кроме  последнего 
    for (int j = 0; j < 10; j++)
    {
      if (j == 9)
        {
            std::cout << arr_int[j] ;
        }
        else
        {
            std::cout << arr_int[j] << "," ;
        }
    } 
    
    return 0 ;
}