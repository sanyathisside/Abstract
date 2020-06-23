#include <iostream>
using namespace std;
int ratInAMaze(char maze[1000][1000], char sol[1000][1000], int i, int j, int n, int m){
	if (i==n && j==m){
		sol[n][m]='1';
		for(i=0; i<=n; i++){
			for(j=0; j<=m; j++){
				cout<<sol[i][j]<<" ";
			}
		cout<<endl;
	}
		return true;
	}
	
	if(i>n || j>m){
		return false;
	}
	
	if(maze[i][j]=='X'){
		return false;
	}
	
	sol[i][j]='1';
	bool right=ratInAMaze(maze,sol,i,j+1,n,m);
    if(right)
    {
        return true;
    }
    else                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 j
    {
    bool down=ratInAMaze(maze,sol,i+1,j,n,m);
      if(down)
      {
          return true;
      }
    }
    sol[i][j]='0';
    return false;
    
}
int main(){
	int n,m;
	cin>>n>>m;
	char maze[1000][1000];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>maze[i][j];
		}
	}
	
	char sol[1000][1000]={0};
	bool answer= ratInAMaze(maze, sol,0,0,n-1,m-1);
	if(answer==false){
		cout<<"-1";
	}	
	return 0;
}
