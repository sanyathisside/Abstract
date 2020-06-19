#include <iostream>
using namespace std;

void hanoi(int n, char src, char dest, char hpr){
	if(n==0)
	{return;
	}
	
	hanoi(n-1,src,hpr,dest);
	cout<<"Moving"<<" "<<"ring"<<" "<<n<<" "<<"from"<<" "<<src<<" "<<"to"<<" "<<dest<<endl;
hanoi(n-1,hpr,dest,src);

}

int main()
{
int n;
cin>>n;
	char src='A';
	char hpr='C';
	char dest='B';
hanoi(n,src,dest,hpr);	
	
	return 0;
}
