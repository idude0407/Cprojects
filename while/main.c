#include <stdio.h>
#include <stdlib.h>

int main()
{
  int index = 1;

  while(index <= 5) {
    printf("%d\n", index);
    index = index + 1;
    // index++; <---Shorter version of the above.
  }
  return 0;
}