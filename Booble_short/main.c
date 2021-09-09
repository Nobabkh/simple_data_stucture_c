#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, i, temp, n;

    printf("Enter the length of The array : ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter number for position %d", i+1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
