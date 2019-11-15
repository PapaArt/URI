#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Inicio, H1, H2, M1, M2, S1, S2, Fim, Dias, Horas, Minutos, Segundos;
    printf("Dia ");
    scanf("%d", &Inicio);
    scanf("%d : %d : %d", &H1, &M1, &S1);
    printf("Dia ");
    scanf("%d", &Fim);
    scanf("%d : %d : %d", &H2, &M2, &S2);
    Segundos = abs(S2 - S1);
    Minutos = abs(M2 - M1);
    Horas = abs(H2 - H1);
    Dias = abs(Fim - Inicio);
    printf("%d dia(s)\n%d hora(s)\n%d minutos(s)\n%d segundo(s)\n",Dias, Horas, Minutos, Segundos);
    return 0;
}