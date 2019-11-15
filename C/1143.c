#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    double i;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("%.0f %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
    }
    return 0;
}