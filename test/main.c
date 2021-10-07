#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a = malloc(8);
    printf("%d", sizeof(a));
    return 0;
}
