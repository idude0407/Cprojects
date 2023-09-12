#include <stdio.h>
#include <stdlib.h>

int main()
{
  char grade;
  printf("Enter your grade: ");
  scanf("%c", &grade);

  switch(grade) {
    case 'A' : 
        printf("You did great! ");
        break;
    case 'B' : 
        printf("You did pretty good! ");
        break;
    case 'C' : 
        printf("You did ok! ");
        break;
    case 'D' : 
        printf("You did not ok! ");
        break;
    case 'F' : 
        printf("You failed! ");
        break;
    default :
        printf("Invalid Grade");
  }
  return 0;
}