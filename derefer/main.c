#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 30;
  int *pAge = &age;

  printf("This will print age's memory address of: %p\n", pAge);
  //Dereferencing a pointer will print the value of the variable that pointer is pointing to
  printf("By dereferencing we get the value: %d\n", *pAge);

  return 0;
}