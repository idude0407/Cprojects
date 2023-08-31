#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 3;
    double num2 = 85;
    float num3 = 85;
    double x = num2 / num;
    float y = num3 / num;
    printf("This a double division: %.14f \n", x);
    printf("This is a float division: %.6f\n", y);
    return 0;
}
