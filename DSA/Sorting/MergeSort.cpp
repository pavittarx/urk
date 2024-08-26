#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Merge(int arr[], int low, int mid, int high)
{
  int const leftSize = mid - low + 1;
  int const rightSize = high - mid;

  int left[leftSize], right[rightSize];

  for (int i = 0; i < leftSize; i++)
    left[i] = arr[low + i];

  for (int i = 0; i < rightSize; i++)
    right[i] = arr[mid + i + 1];

  int startIndex = low;
  int leftTracker = 0;
  int rightTracker = 0;

  while (leftTracker < leftSize && rightTracker < rightSize)
  {
    if (left[leftTracker] < right[rightTracker])
    {
      arr[startIndex] = left[leftTracker];
      leftTracker++;
    }
    else
    {
      arr[startIndex] = right[rightTracker];
      rightTracker++;
    }

    startIndex++;
  }

  while (leftTracker < leftSize)
  {
    arr[startIndex] = left[leftTracker];
    leftTracker++;
    startIndex++;
  }

  if (rightTracker < rightSize)
  {
    arr[startIndex] = right[rightTracker];
    rightTracker++;
    startIndex++;
  }
}

// Recursive Process
void MergeSort(int arr[], int low, int high)
{
  if (low >= high)
    return;

  int mid = (low + high) / 2;
  MergeSort(arr, low, mid);
  MergeSort(arr, mid + 1, high);
  Merge(arr, low, mid, high);
}

int main()
{
  int arr[] = {3, 4, 5, 6, 7, 1, 10};

  MergeSort(arr, 0, 6);
  printArray(arr, 7);

  return 0;
}