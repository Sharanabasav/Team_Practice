#include<stdio.h>
#include "Common.h"

int Fib(int a)
  {
    if (a <= 1)
      return a;
    return Fib(a-1) + Fib(a-2);
   }
   
