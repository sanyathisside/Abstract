/*
deference operator: *
by dereferencing we can access the variable in which they are pointing to
&bucket -> address
*address -> bucket

*/

#include <iostream>
using namespace std;
int main() {
    int x=10;
    int *xptr;
    xptr=&x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    cout<<*(&x)<<endl;
    cout<<*(xptr)<<endl;

    cout<<*(&xptr)<<endl;
    cout<<&(*xptr)<<endl;

    cout<<&xptr<<endl;
    int **xxptr = &xptr; //int* for data type, * for syntax
    cout<<xxptr<<endl;

    return 0;
}
