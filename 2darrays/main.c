#include <stdio.h>
#include <stdlib.h>

int main()
{
//Nested arrays (arrays within arrays)
  int nums[3] [2] = {{1, 2}, {3, 4}, {5, 6}};

//Nested for loop (for loops within a for loop)
  int i, j;
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 2; j++) {
        printf("%d,", nums[i][j]);
    }
    printf("\n");
  }
  return 0;
}