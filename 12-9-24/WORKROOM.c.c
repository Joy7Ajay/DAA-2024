//1. WRITE AN ALGORITHM TO FIND THE MAXIMUM ELEMENT IN AN ARRAY, IMPLEMENT THE ALGORITHM WITH A C/C++ CODE.


 /*
         PSEUDOCODE
1. Create an array.
2. Start by considering the first element as the maximum.
3. Look through the array, one element at a time.
4. If you find an element that is bigger than the current maximum, consider it as the new maximum.
5. After looking at all elements, the maximum you have is the largest element in the array.
 */


//         CODE
#include <stdio.h>

int main() {
  int arr[] = {30, 13, 23, 43, 55}; // Example array
  int size = sizeof(arr) / sizeof(arr[0]); // Get the size of the array
  int max = arr[0]; // take the first element as max (maximum)

  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i]; // take a bigger element as the new max
    }
  }

  printf("Maximum element in the array: %d\n", max);

  return 0;
}