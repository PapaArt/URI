#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, Fibo1 = 0, Fibo2 = 0, Aux = 0;
    scanf("%d", &N);
    if (N < 46 && N > 0)
    {
        if (N == 0)
        {
            printf("%d\n", Fibo1);
        }
        Fibo1++;
        Fibo2++;
        for (i = 1; i < N;i++)
        {
            Fibo1 = Aux + Fibo2;
            Fibo2 = Aux;
            Aux = Fibo1;
            printf("%d ",Fibo2);
        }
            Fibo1 = Aux + Fibo2;
            Fibo2 = Aux;
            Aux = Fibo1;
            printf("%d\n",Fibo2);
    }
    return 0;
}