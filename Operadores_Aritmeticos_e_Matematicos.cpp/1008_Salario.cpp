#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    int hrTrabal;
    float valorHr;
    float SALARIO;

    cin >> num;
    cin >> hrTrabal;
    cin >> valorHr;
    SALARIO = (hrTrabal * valorHr);

    cout << "NUMBER = " << num << endl;
    
    cout<< fixed << setprecision(2) << "SALARY = U$ " << SALARIO << endl;
    return 0;
}