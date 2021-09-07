
#include <stdio.h>


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}
int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

void binary(int array[], int n, int x)
{

  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result+1);
}



int main() {
  int data[] = {12, 3, 4, 6, 8, 14, 44, 17, 65, 9, 41};
  int get = 12;
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorting array in Acsending Order\n");
  binary(data, size, get);
  return 0;


}




