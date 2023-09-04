#include <stdio.h>
#include <stdlib.h>

//Functions that return a value get put the above method.
double cube(double num) {
    double result = num * num * num;
    return result;
}

/*
double cube(double num) {
    return num * num * num;
}

The above does exactly the same thing as above.
*/

int main()
{
  printf("Answer: %.2f", cube(3.0));

  return 0;
}