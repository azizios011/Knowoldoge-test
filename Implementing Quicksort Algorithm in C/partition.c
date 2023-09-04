#include "main.h"

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int x = (low - 1);
    int y;

     for (y = low; y < high; y++)
     {
        if (array[y] <= pivot)
        {
        
      x++;
      
      swap(&array[x], &array[y]);
    }
  }

  swap(&array[x + 1], &array[high]);
  
  return (x + 1);
}
