#include <stdio.h>
#include <stdlib.h>
typedef int(*functionptr)(int a, int b);

int small_element(int arr[], int size)
{
    int temp = arr[1];
    for(int i = 0;i < size; i++)
    {
        if(arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int maximum_element(int arr[], int size)
{
    int temp = arr[1];
    for(int i = 0;i < size; i++)
    {
        if(arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}
functionptr fun1 = maximum_element;
functionptr fun2 = small_element;

int main()
{

    int size;
    int res;
    printf("Enter The size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter The elements of the array\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

        res = fun2(arr, size);
        printf("Minimum element is %d\n", res);
        res = fun1(arr, size);
        printf("Maximum element is %d\n", res);



    return 0;
}
