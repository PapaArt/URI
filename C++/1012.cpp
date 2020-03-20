#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    double A,B,C;
    cin >> A >> B >> C;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",(A*C/2), (3.14159*pow(C,2)), (((A+B)*C)/2), (pow(B,2)), (A*B));
    return 0;
}