#include <iostream>
using namespace std;

//pass by reference using pointers
void increment(int *aptr){
    *aptr= *aptr +1; //will point to bucket
    cout<<"Inside function "<< *aptr<<endl;

}

int main(){
    int a=10;
    increment(&a);
    cout<<"Inside main "<<a;
    return 0;
}
