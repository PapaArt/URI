#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[10], i, X;
    scanf("%d", &X);
    N[0] = X;
    for (i = 0; i < 9; i++)
    {
        N[i+1] = N[i] * 2;
    }
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}