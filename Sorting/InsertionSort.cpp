#include <bits/stdc++.h>

using namespace std;

/*
  1. Start with the second element of the array.
  2. Compare the second element with the one before it. If the key is smaller, shift the element to the right.
  3. Repeat 2. with elements to the left.
  4. Insert the element at the correct position.

  - Time Complexity: O(n^2)
  - Space Complexity: O(1)
*/

void InsertionSort(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int key = arr[i];
    int index = i - 1;

    while (index >= 0 && arr[index] > key)
    {
      cout << index << " " << arr[index] << " " << key << endl;
      // Shift to right, and make space for key to be inserted
      arr[index + 1] = arr[index];
      --index;
    }

    // Make up for last decrement
    arr[index + 1] = key;
  }
}

int main()
{
  int arr[] = {5, 10, 9, 20, 17, 13, 11};

  InsertionSort(arr, 7);

  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}