#include <stdio.h>
#include <stdlib.h>



void insert()
{
   int position, c, n, tem;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   int  array[n];
   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
   }

   printf("Enter the location where you wish to insert element\n");
   scanf("%d", &position);
   printf("Enter the element\n");
   scanf("%d", &tem);



   if (position >= n+1)
   {
      printf("insertation not possible.\n");
   }
   else
   {
      for (c = n; c >= position; c--)
      {
         array[c] = array[c-1];
      }
      array[position-1] = tem;

      printf("Resultant array:\n");

      for (c = 0; c < n+1 ; c++)
      {
         printf("%d\n", array[c]);
      }
   }


}


void deletee()
{
   int position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   int array[n];
   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
      {
         array[c] = array[c+1];
      }

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
      {
         printf("%d\n", array[c]);
      }
   }


}

void search()
{
    int size;
    printf("Enter the length of the array  : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements\n");
    for(int j = 0; j < size ; j++)
    {
        scanf("%d", &arr[j]);
    }
    printf("Enter the element to search\n");
    int temp, get, nbool = 0;
    scanf("%d", &temp);
    for(int i = 0; i < size; i++)
    {
        if(temp == arr[i])
        {
            get  = i;
            nbool = 1;
        }
    }
    if(nbool == 0)
    {
        printf("not found in array");
    }
    else{
        printf("Element Found at %d", get);
    }
}



void traverse()
{
    int siz;
    printf("Enter the size of the array\n");
    scanf("%d", &siz);
    int arr[siz];
    for(int i = 0; i < siz; i++)
    {
        printf("Enter the %d element of the array\t", i+1);
        scanf("%d\n", &arr[i]);
    }
    printf("The array is \n");
    for(int i = 0; i < siz; i++)
    {
        printf("%d\t", arr[i]);
    }

}



void sorting()
{
    int i, j, n, temp, min;
    printf("Enter The length of The array\n");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter The value of element %d  ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = 0+i; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }

        }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;

    }

        for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

}



// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Driver program
void Main_merge() {
  int size;
  printf("enter the size of array : ");
  scanf("%d", &size);
  int arr[size];
  for(int i = 0; i < size ; i++)
  {
      scanf("%d", &arr[i]);
  }

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}






int main()
{
    int status = 10;
    while(status != 0){
    printf("1 : Traverse\n");
    printf("2 : insert\n");
    printf("3 : Delete\n");
    printf("4 : Search\n");
    printf("5 : sort\n");
    printf("6 : Merge\n");
    printf("0 : exit\n");
    scanf("%d", &status);
    switch(status)
    {
        case 1:
            traverse();
            break;

        case 2:
            insert();
            break;

        case 3:
            deletee();
            break;

        case 4:
            search();
            break;

        case 5:
            sorting();
            break;

        case 6:
            Main_merge();
            break;
        default:
            break;



    }
    }


    return 0;
}
