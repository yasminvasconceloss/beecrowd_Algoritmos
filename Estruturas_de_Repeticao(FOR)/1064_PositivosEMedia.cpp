#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	float valor; // Ler o valor de entrada
	int cont_positivos = 0; // Contar quantas vezes digitou valores positivos
	float Soma = 0; 

	for (int i=0;i<6;i++){
		
	cin >> valor; // Lendo o valor 
	
	if (valor > 0)
	{						// Verificando se o valor é positivo
		cont_positivos++;   // Verifica a quantidade de valores positivos digitados

		Soma += valor;
	}
	}
	cout << cont_positivos << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << Soma/cont_positivos << endl;
	return 0;
}

