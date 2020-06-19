#include <iostream>
#include <cstring>
using namespace std;

void Convert(string s,int i,int n){
    if(i>n){
        return;
    }
    if(s[i]){
        cout<<s[i];
        Convert(s,i+1,n);
    }
    }

int main() {
        string s;
        cin>>s;
        int l=s.length();
        Convert(s,0,l);
    return 0;
}

