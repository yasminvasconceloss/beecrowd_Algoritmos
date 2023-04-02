#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   int codigo;
   double quantidade;
   
   cin >> codigo;
   cin >> quantidade;
   
   
   cout << fixed << setprecision(2);
   if (codigo == 1)
        cout << "Total: R$ " << quantidade*4 << endl;

    else if (codigo == 2)
        cout << "Total: R$ " << quantidade*4.5 << endl;
    
    else if (codigo == 3)
        cout << "Total: R$ " << quantidade*5 << endl;
      
    else if (codigo == 4)
        cout << "Total: R$ " << quantidade*2 << endl;

    else if (codigo == 5)
        cout << "Total: R$ " << quantidade*1.5 << endl;
        
    return 0;
}