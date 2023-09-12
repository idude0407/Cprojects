#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 30;
  int * pAge = &age; //Pointer holding age's memory address
  double gpa = 3.4;
  double * pGpa = &gpa;
  char grade = 'A';
  char * PGrade = &grade;

//Both will print ages's memory address
  printf("pAge is: %p\n", pAge);
  printf("age's memory address is: %p\n", &age);
  return 0;
}