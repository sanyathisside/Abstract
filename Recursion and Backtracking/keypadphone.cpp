#include <iostream>
using namespace std;

int count=0;
char keypad[][10]= {" ","abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx", "yz" };
void printKeypad(char *in, char *out, int i, int j){
	if(in[i]=='\0'){
	out[j]='\0';
	cout<<out<<" ";
	count++;
	return;
}
int digit=in[i]-'0';
for(int k=0;keypad[digit][k]!='\0';k++)
{
out[j]=keypad[digit][k];
printKeypad(in,out,i+1,j+1);
}
}
int main()
{ char in[100];
cin>>in;
char out[100];
printKeypad(in,out,0,0);
	cout<<endl;
    cout<<count;
return 0;
}

