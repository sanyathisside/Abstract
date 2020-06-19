#include <iostream>
#include <cstring>
using namespace std;

void Convert(string s,int i,int n){
    if(i>n){
        return;
    }
    if(s[i]=='p' and s[i+1]=='i'){
        cout<<"3.14";
        Convert(s,i+2,n);
    }
    else{
    cout<<s[i];
    Convert(s,i+1,n);}
}

int main() {
    int i, n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int l=s.length();
        Convert(s,0,l);
        cout<<endl;
    }
    return 0;
}

