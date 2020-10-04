#include<stdio.h>
int main()
{

   int array[5];
   int i,sum=0;
   int *ptr;


   for(i=0;i<5;i++)
      scanf("%d",&array[i]);


   ptr = array;

   for(i=0;i<5;i++)
   {

      sum = sum + *ptr;
      ptr++;
   }

   printf("The sum is: %d",sum);
}
