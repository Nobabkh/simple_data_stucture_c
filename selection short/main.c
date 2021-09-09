#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
