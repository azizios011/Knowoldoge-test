#include "main.h"

void quickSort(int array[], int low, int high)
{
    int pivot;

    if (low < high)
    {
        pivot = partition(array, low, high);
    
        quickSort(array, low, pivot - 1);
    
        quickSort(array, pivot + 1, high);
    }
}
