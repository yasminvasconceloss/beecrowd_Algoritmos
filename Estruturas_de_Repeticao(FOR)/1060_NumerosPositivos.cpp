#include <iostream>

using namespace std;

int main()
{

	float valor; // Ler o valor de entrada
	int cont_positivos = 0; // Contar quantas vezes digitou valores positivos 

	for (int i=0;i<6;i++){
		
	cin >> valor; // Lendo o valor 
	
	if (valor > 0)
	{						// Verificando se o valor é positivo
		cont_positivos++;   // Verifica a quantidade de valores positivos digitados

	}
	}
	cout << cont_positivos << " valores positivos" << endl;
	return 0;
}

