#include <stdio.h>
#include "Common.h"

int main()
  {
    int n;
    int num1 = 35;
    int num2 = 45;
    int c_degree = 28;
    int f_degree = 85;
    
    printf("%d° celcius is equal to %d° fahrenheit\n", c_degree, cel_to_far(c_degree));
    printf("%d° fahrenheit is equal to %d° celcius\n", f_degree, far_to_cel(f_degree));
  
    
    n = Fib(9);
    printf("Fibonacci of 9 is : %d\n", n);
   
   /*Before Swapping*/
    printf("Before swapping: %d, %d", num1, num2);
  
    /*calling swap function*/
    swapnum(&num1, &num2);
    printf("\nAfter swapping: %d, %d", num1, num2);
 
  }
  
void swapnum(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;  
 }

