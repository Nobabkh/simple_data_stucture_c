#include <stdio.h>
int main()
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

   return 0;
}
