#include <bits/stdc++.h>

using namespace std;

/*
  1. Pick the first element.
  2. Compare the element with every next element. If the compared element is smaller, swap location. 
  3. Repeat 1 & 2 with every other element.

  - Time Complexity: O(n^2)
  - Space Complexity: O(1)
*/

void BubbleSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main()
{
  int arr[] = {5, 10, 9, 20, 17, 13, 11};

  BubbleSort(arr, 7);

  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}