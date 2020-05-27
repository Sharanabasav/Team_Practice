#include <stdio.h>
#include "Common.h"

/* Call Pointer to function to double the Salary */
double *multiplyByTwo (double *input) {
  
  /* Memory allocation in Heap */
  double *twice = malloc(sizeof(double));
  *twice = *input * 2.0;
  return twice;
}

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
  
    /* Memory allocation in Heap */
  int *age = malloc(sizeof(int));
  *age = 30;
  double *salary = malloc(sizeof(double));
  *salary = 12345.67;
  double *myList = malloc(3 * sizeof(double));
  myList[0] = 1.2;
  myList[1] = 2.3;
  myList[2] = 3.4;

  double *twiceSalary = multiplyByTwo(salary);

  printf("double your salary is %.3f\n", *twiceSalary);

  /* Releasing Memory allocation from Heap */
  free(age);
  free(salary);
  free(myList);
  free(twiceSalary);
  
    return 0;
 
  }
  
void swapnum(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;  
 }

