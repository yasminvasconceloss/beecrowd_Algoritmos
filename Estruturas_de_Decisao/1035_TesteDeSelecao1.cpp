#include <iostream>

using namespace std;

int main ()
{

  int A;
  int B;
  int C;
  int D;

  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;

  if ((B > C && D > A)&&(C + D > A + B)&&(C && D > 0)&&(A % 2 == 0))
	        cout << "Valores aceitos" << endl;
  else
	  cout << "Valores nao aceitos" << endl;

  return 0;
}
