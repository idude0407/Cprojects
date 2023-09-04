#include <stdio.h>
#include <stdlib.h>

int main()
{
  sayHello("Eduardo", 59);
  sayHello("Luís", 60);
  sayHello("Palmira", 61);
  return 0;
}

void sayHello(char userName[], int age) {
  printf("Hello %s, you are %d\n", userName, age);
}