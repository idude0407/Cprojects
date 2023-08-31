#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    int age;
    char grade;
    double gpa;

    printf("What is your name? ");
    fgets(name, 30, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("What is your grade? ");
    scanf("%c", &grade);
    printf("What is your gpa? ");
    scanf("%lf", &gpa);
    printf("Your name is %s and you are %d years old\nYour grade is %c and your gpa is %f", name, age, grade, gpa);
    return 0;
}
