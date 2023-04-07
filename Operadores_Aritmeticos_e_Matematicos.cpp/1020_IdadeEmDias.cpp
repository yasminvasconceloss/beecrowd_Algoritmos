#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int idade, x;

    cin >> idade;

    x = idade / 365;
    cout << x << " ano(s)" << endl;

    idade -= x * 365;
    x = idade / 30;
    cout << x << " mes(es)" << endl;

    idade -= x * 30;
    cout << idade << " dia(s)" << endl;

    return 0;
}