#include <bits/stdc++.h>

using namespace std;

/*
  Quick Sort Algorithm (DnQ)
  1. If low < high, Partition the array around the pivot.
  2. Recursively Sort Left & Right Subarrays.

  Understanding QuickSort:
  - QuickSort: https://www.youtube.com/watch?v=7h1s2SojIRw
  - Partitioning: https://youtu.be/0SkOjNaO1XY?t=31
*/

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int low, int high)
{

  // 1, 5, 8, 9, 10, 7
  int pivot = arr[high]; // 7
  int i = low - 1;       // 1

  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[high]);

  return i + 1;
}

void QuickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pIndex = partition(arr, low, high);

    QuickSort(arr, low, pIndex - 1);
    QuickSort(arr, pIndex + 1, high);
  }
};

int main()
{
  int arr[] = {10, 7, 8, 9, 1, 5};

  QuickSort(arr, 0, 5);

  printArray(arr, 6);
}
