#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, PA, PB, i, anos = 0;
    double G1, G2;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        anos = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while (PA <= PB)
        {
            anos++;
            PA = PA + ((PA * G1)/100);
            PB = PB + ((PB * G2)/100);
            if (anos > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
            if(anos <= 100)
            {
                printf("%d anos.\n", anos);
            }
    }
    return 0;
}