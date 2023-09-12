#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE * fpointer = fopen("test.txt", "a");

  fprintf(fpointer, "Nance Silva");

  fclose(fpointer);
  return 0;
}