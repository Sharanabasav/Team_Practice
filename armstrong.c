#include <stdio.h>
 
int main()
{
   int n, sum = 0, t, r;
   printf("\nPlease enter a number to find whether it is an armstrong or not: ");
   scanf("%d",&n);
 
   t = n;

   while(t != 0)
   {
      r = t%10;
      sum = sum + (r*r*r);
      t = t/10;
 
   }
 
   if (n == sum)
      printf("\nThe number %d is an armstrong number", n);
 
   else
      printf("\nThe number %d is not an armstrong number", n);
 
   return 0;
 
}
