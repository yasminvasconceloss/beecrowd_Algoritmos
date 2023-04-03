#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main() {
 
    int Horas; 
    float litros, velocidadeMedia;
    
    cin >> Horas;
    cin >> velocidadeMedia;

    litros = (Horas * velocidadeMedia)/12;

    cout << fixed << setprecision(3);
    cout << litros << endl;
 
    return 0;
}