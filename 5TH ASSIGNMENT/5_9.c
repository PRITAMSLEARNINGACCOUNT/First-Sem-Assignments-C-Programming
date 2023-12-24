#include <stdio.h>
// PREPARE ALL THE GEOMETRICE AREA CALCULATION USING SWITCH CASE
int main()
{
    int INPUT;
    float Area, base, height, radious, lenght, width, side;

    printf("Enter The Input In Code(1 For Triangle,2 For Circle,3 For Retangle & 4 For Square):: ");
    scanf("%d", &INPUT);

    switch (INPUT)
    {
    case 1:
        printf("Enter the BASE of the TRIANGLE:: ");
        scanf("%.2f", &base);
        printf("Enter the HEIGHT of the TRIANGLE:: ");
        scanf("%.2f", &height);
        Area = 0.5 * base * height;
        break;

    case 2:
        printf("Enter the RADIOUS of the CIRCLE:: ");
        scanf("%.2f", &radious);
        Area = 3.14 * radious * radious;
        break;

    case 3:
        printf("Enter the LENGHT of the RETANGLE:: ");
        scanf("%.2f", &lenght);
        printf("Enter the WIDTH of the RETANGLE:: ");
        scanf("%.2f", &width);
        Area = lenght * width;
        break;

    case 4:
        printf("Enter the SIDE of the SQUARE:: ");
        scanf("%.2f", &side);
        Area = side * side;
        break;

    default:
        printf("NOT A VAILD INPUT CODE");
        break;
    }

    printf("Area=%.2f", Area);

    return 0;
}