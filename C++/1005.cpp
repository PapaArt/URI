#include <iostream>
#include <string>

using namespace std;

int main()
{
    double A, B, Media;
    cin >> A >> B;
    Media = (A * 3.5 + (B * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", Media);
    return 0;
}