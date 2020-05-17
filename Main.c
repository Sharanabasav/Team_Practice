#include <stdio.h>
#include "Common.h"

int main()
  {
    int n;
    int num1 = 35;
    int num2 = 45;
    
    n = Fib(9);
    printf("Fibonacci of 9 is : %d\n", n);
   
   /*Before Swapping*/
    printf("Before swapping: %d, %d", num1, num2);
  
    /*calling swap function*/
    swapnum(num1, num2);
    printf("\nAfter swapping: %d, %d", num1, num2);
 
  }
  
void swapnum( int var1, int var2 )
{
   int tempnum ;
   /*Copying var1 value into temporary variable */
   tempnum = var1 ;
   /* Copying var2 value into var1*/
   var1 = var2 ;
   /*Copying temporary variable value into var2 */
   var2 = tempnum ;

}
