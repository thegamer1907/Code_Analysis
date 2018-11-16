#include<iostream>
#define SIZE 31000
int mat[2][SIZE];
int n;
using namespace std;
void dfs(int i,int to)
{
	int j=i+mat[1][i];
	if(j==to)
	{
		cout<<"YES";
		return;
	}
	else if(j>to)
	{
		cout<<"NO";
		return;
	}
	else
	dfs(j,to);
	
}
int main()
{

int to;
cin>>n>>to;
for(int j=1;j<n;j++)
cin>>mat[1][j];	

dfs(1,to);
}
