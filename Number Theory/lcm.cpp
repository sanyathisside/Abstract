#include <iostream> 
using namespace std; 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int lcm(int a, int b)
{
	return a*b/gcd(a,b);
}
   int main() 
{ 
int c,d;
cin>>c>>d;
    cout<<lcm(c,d);
	return 0; 
} 
