#include <iostream>
#include <cstring>
using namespace std;

int count=0;

void subsequence(char *in, char *out,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		count++;
		return;
	}
	subsequence(in,out,i+1,j);
out[j]=in[i];
subsequence(in,out,i+1,j+1);
}



int main()
{char in[100];
cin>>in;
char out[100];
subsequence(in,out,0,0);
	cout<<endl;
    cout<<count;
	return 0;
}
