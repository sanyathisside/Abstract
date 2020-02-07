/*Implicit Type Conversion:
Done by the compiler on its own, without any external trigger from the user.
bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double

Explicit Type Conversion: 
Syntax:
(type) expression

*/

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    double x = 1.2; 
  
    // Explicit conversion from double to int 
    int sum = (int)x + 1; 
  
    cout << "Sum = " << sum; 
  
    return 0; 
} 
