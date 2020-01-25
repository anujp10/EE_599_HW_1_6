#include "solution.h"

int Solution::Factorial(int n) { 
    return Factorial_Recursive(n);
    //return Factorial_NonRecursive(n);
}


int Solution::Factorial_Recursive (int n) {
  if (n == 0)
    return 1;
  else if (n < 0)
    return -1;
  else
    return (n * (Factorial_Recursive(n - 1)));
}

int Solution::Factorial_NonRecursive (int n) {
  int result = 1;

  if (n < 0)
    return -1;

  while (n > 0) {
    result *= n;
    n--;
  }

  return result;
}