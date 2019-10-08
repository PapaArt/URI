#include <stdio.h>

int main()
{
    int N, C = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        printf("%d %d %d PUM\n",C, C + 1, C + 2);
        C = C + 4;
    }
    return 0;
}