#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int age;
    char grading;
    double gpa;

    printf("Enter your name: ");
    fgets(name, 20, stdin); // All character will start in a new line
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your grade: ");
    scanf(" %c", &grading); // Must have a space before the specifier
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your name is %sYour age is %d\nYour grade is %c\nYour GPA is %.1f\n", name, age, grading, gpa);
    return 0;
}
