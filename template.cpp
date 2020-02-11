/*
example of template in stack*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T> 
class Stack{
    private:
    vector <T> v;
    
    public:
    void push(T data){
        v.push_back(data);
    }

    bool isEmpty(){
        return v.size()==0;
    }

    void pop(){
        if(!isEmpty()){
        v.pop_back();
        }
    }

    T top(){
        return v[v.size()-1];
    }
};

int main(){
    Stack<int> s;
    for(int i=0; i<6; i++){
     s.push(i*i);   
    }
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
