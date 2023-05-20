// Task-1
#include <stdio.h>
int main()
{
    double L, B, H, R, area_square, area_triangle, area_circle;

    // Taking input to calculate the area of a square
    printf("Enter length of the square in cm: ");
    scanf("%lf", &L);

    // Printing area of the square
    area_square = L * L;
    printf("Area of the square is: %.2lf  sq cm\n", area_square);

    // Taking input to calculate the area of a triangle
    printf("Enter base of the triangle in cm: ");
    scanf("%lf", &B);
    printf("Enter height of the triangle in cm: ");
    scanf("%lf", &H);

    // Printing area of the triangle
    area_triangle = 0.5 * B * H;
    printf("Area of the triangle is: %.2lf sq cm\n", area_triangle);

    // Taking input to calculate the area of a circle
    printf("Enter radius of the circle cm: ");
    scanf("%lf", &R);

    // Printing the area of the circle
    area_circle = 3.1416 * R * R;
    printf("Area of the circle is: %.2lf sq cm\n", area_circle);

    return 0;
}