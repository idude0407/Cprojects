#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 20;
  double gpa = 3.4;
  char grade = 'A';

  printf("Age is located at %p\nGPA is located at %p\nGrade is located at %p", &age, &gpa, &grade);
  return 0;
}