#include <iostream>
#include <iomanip>


using namespace std;

int main()
{

    double A;
    double B;
    double C;

    cout << fixed << setprecision(1);
    cin >> A;
    cin >> B;
    cin >> C;


    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (A * C) / 2 << endl;
    cout << "CIRCULO: " << 3.14159 * C * C << endl;
    cout << "TRAPEZIO: " << ((A+B)*C)/2  << endl;
    cout << "QUADRADO: " << B * B << endl;
    cout << "RETANGULO: " << A * B << endl;

    return 0;
}