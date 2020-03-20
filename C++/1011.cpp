#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double Raio;
    cin >> Raio;
    cout << fixed << setprecision(3) << "VOLUME = " << (4/3.0) * 3.14159 * pow(Raio,3) << endl;
    return 0;
}