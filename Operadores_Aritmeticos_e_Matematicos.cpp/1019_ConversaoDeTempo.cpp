#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int N, segundoRest, horas, minutos, segundos;
    cin >> N;

    horas = N / 3600;
    segundoRest = N % 3600;
    minutos = segundoRest / 60;
    segundos = segundoRest % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}