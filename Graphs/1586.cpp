#include <bits/stdc++.h>
using namespace std;

int arr[100004];
int n,t;
int f=0;
void dfs(int x)
{
	if(x==t)
	{
		f=1;
		return;
	}
	if(x>t)
	{
		return;
	}
	dfs(x+arr[x]);
}

int main()
{ 
  
  cin>>n>>t;
  for(int i=1;i<=n;i++)
  	{
   		cin>>arr[i];
  	}
  	dfs(1);
  	if(f)
  		cout<<"YES"<<endl;
  	else
  		cout<<"NO"<<endl;
}