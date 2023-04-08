#include <iostream>

using namespace std;

int main()
{

	int valor; 
	int cont_pares = 0;

	for (int i=0;i<5;i++){
		
	cin >> valor; // Lendo o valor 
	
	if (valor % 2 == 0)
	{						// Verificando se o valor é par
		cont_pares++;   // Verifica a quantidade de valores pares digitados

	}
	}
	cout << cont_pares << " valores pares" << endl;
	return 0;
}