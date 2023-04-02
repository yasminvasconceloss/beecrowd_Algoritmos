#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A;
    double B;
    double C;
    double delta;
    double quadrado;
    double raiz;
    double R1;
    double R2;
   
    cin >> A;
    cin >> B;
    cin >> C;
   
    quadrado = pow(B,2);
    delta = quadrado - (4 * (A)*(C));
    raiz = sqrt(delta);
    
   
    R1 = (-(B) + raiz)/ (2*A);
    R2 = (-(B) - raiz)/ (2*A);
    cout << fixed << setprecision(5);
    
    if (A == 0 || delta < 0)
        cout << "Impossivel calcular" << endl;
    else 
        {
            cout << "R1 = " << R1 << endl;
            cout << "R2 = " << R2 << endl;
        }

   
    return 0;
}