#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, determinant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    determinant = b*b - 4*a*c;

    // condition for real and different roots
    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2*a);
        root2 = (-b - sqrt(determinant)) / (2*a);

        printf("Roots are: %.2f and %.2f", root1, root2);
    }

    // condition for real and equal roots
    else if (determinant == 0)
    {
        root1 = root2 = -b / (2*a);

        printf("Roots are: %.2f and %.2f", root1, root2);
    }

    // if roots are not real
    else
    {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-determinant) / (2*a);

        printf("Roots are: %.2f + %.2fi and %.2f - %.2fi", realPart, imaginaryPart, realPart
