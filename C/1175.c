#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 20, Aux = 0, N2 = 19,i, Array[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (i = 0; i < (N/2); i++)
    {
        Aux = Array[i];
        Array[i] = Array[N2];
        Array[N2] = Aux;
        N2--;
    }
    for (i = 0; i < N; i++)
    {
        printf("N[%d] = %d\n",i,Array[i]);
    }
    return 0;  
}