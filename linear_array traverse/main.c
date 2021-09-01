#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
