#include <stdio.h>

int main()
{
    int n, i, k, w, result, tem = 100, res1, res2, bol =0;

    w = sizeof(int);
    printf("E.G just for int type array\n");
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int arr[n];
    int *pion = &arr[0];
    printf("Enter the Elements of the array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[i] = tem;
    for(i = 0; i < n; i++)
    {
        if(arr[i] < tem)
        {
            tem = arr[i];
        }
    }
    printf("LB is of the array is %d\n", tem);
    printf("Enter a element of the array to know know it's memory location\n");
    scanf("%d", &k);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            bol = 1;
            break;
        }
    }
    if(bol == 0)
    {
        printf("%d not found in the array\n", k);
        return 0;
    }
    res1 = k - tem;
    res2 = w * res1;
    printf("%d", res2);
    result = (int)pion + res2;
    printf("Memory address of %d is %d \n", k, result);
    return 0;

}
