#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int N; 
	cin >> N; // Lendo o valor
	
	for (int i=2;i<=N;i++) // i processa valores somente até N
	{  
		
	    if(i % 2 == 0)
        {
            cout << i << "^" << "2" << " = " << int(pow(i, 2)) << endl;
        }
	}
	return 0;
}