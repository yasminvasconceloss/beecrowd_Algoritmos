#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float Salario;

    cin >> Salario;
    cout << fixed << setprecision(2);

    if (Salario <= 2000.00) cout << "Isento" << endl;

    else if (Salario <= 3000.00) cout << "R$ " << (Salario - 2000.00) * 0.08 << endl;

    else if (Salario <= 4500.00) cout << "R$ " << (Salario - 3000.00) * 0.18 + 80.00 << endl;

    else cout << "R$ " << (Salario - 4500.00) * 0.28 + 350.00 << endl;
    
    return 0;
}