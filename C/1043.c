#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, Area;
    scanf("%f %f %f", &A, &B, &C);
    Area = ((A+B) * C) / 2;
    if (abs(B-C) < A && A < B + C)
    {
        printf("Perimetro = %.1f\n", (A + B + C));
    }
    else if (abs(A-B) < C && C < B + A)
    {
        printf("Perimetro = %.1f\n", (A + B + C));
    }
    else if (abs(A-C) < B  && B < C + A)
    {
        printf("Perimetro = %.1f\n", (A + B + C));
    }
    else
    {
        printf("Area = %.1f\n", Area);
    }
    return 0;
}