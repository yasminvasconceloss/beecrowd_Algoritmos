#include <iostream>
#include <iomanip>
#include <cmath>  // bibl. elevar a 2
 
using namespace std;
 
int main() {
 
    double raio;
    double area;
    double n;
   
    n = 3.14159;
    cin >> raio;
    area = n * pow(raio, 2);
    
    
    cout << fixed<< setprecision(4);
    cout << "A=" << area << endl;
   
   
    return 0;
}