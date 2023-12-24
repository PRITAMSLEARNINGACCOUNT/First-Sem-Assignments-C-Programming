#include <stdio.h>
float pie = 3.14;
int main()
{
    float radius;
    printf("Enter The Radius Of The Circle?\n");
    scanf("%f", &radius);
    printf("So The Circumference And Area Of The Circle Is %.2f and %.2f\n", 2 * pie * radius, pie * radius * radius);
    return 0;
}