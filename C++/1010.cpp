#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Cod_peca[2], Quant_peca[2];
    float Preco_peca[2];
    cin >> Cod_peca[0] >> Quant_peca[0] >> Preco_peca[0];
    cin >> Cod_peca[1] >> Quant_peca[1] >> Preco_peca[1];
    printf("VALOR A PAGAR: R$ %.2f\n", (Quant_peca[0] * Preco_peca[0]) + (Quant_peca[1] * Preco_peca[1]));
    return 0;
}