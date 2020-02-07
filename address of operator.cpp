#include <iostream>
using namespace std;
int main() {
    int a=10;
    float b=20.1;
    char c='A';
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    // it doesn't work for char variable
    //explicit typecasting from char* to void*
    cout<<(void*)&c<<endl;
}
