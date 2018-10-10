#include <bits/stdc++.h>

using namespace std;
int n,k;

void dfs(int num,int sum,int dep)
{
	if(dep==k)
	{
		int temp=num*10+(10-sum);n--;
		if(!n)
		{
			cout << temp;
			exit(0);
		}
		else return;
	}
	
	int begin;
	if(!num) begin=1;
	else begin=0;
	for(int i=begin;sum+i<=10 && i<=9;i++)
		dfs(num*10+i,sum+i,dep+1);
}

int main()
{
	cin >> n;k=1;
	while(true)
	{
		k++;
		dfs(0,0,1);
	}
	return 0;
}