#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    double raio, pi = 3.14159, area;
    cin >> raio;
    area = pi * pow(raio,2);
    printf("A=%.4lf\n", area);
    return 0;
}