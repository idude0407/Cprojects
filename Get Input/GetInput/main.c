#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
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
    printf("Your name is %s and you are %d years old.", name, age);
    printf("Your grade is %c and your gpa is %f.", grade, gpa);
    return 0;*/
    char name[30];
    int age;
    char grade;
    double gpa;
    printf("Enter your name: ");
    fgets(name, 30, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your grade: \n");
    scanf("%c", &grade);
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your name is %s and your age is %d.", name, age);
    printf("Your grade is %c and your GPA is %f", grade, gpa);
    return 0;

}
