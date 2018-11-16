#include<bits/stdc++.h>
using namespace std;
int i;
vector<vector<int>>g;
vector<bool>visit;
/*void chkequi(vector<vector<int>>g)
{
	int f=0;
	for(int i=1; i<=3; i++)
	{
		int sum=0;
		for(auto it=g[i].begin(); it!=g[i].end(); it++)
		{
			sum=sum + *it;
		}
		if(sum!=0)
		{
			f=1;
			cout<<"NO";
			break;
		}
	}
	if(f==0)
	{cout<<"YES";}
	
}*/
int main()
{
	int n,x,y,z;
	cin>>n;
	//visit.assign(n+1,false);
	//g.assign(n+1,vector<int>());
	int sumx=0, sumy=0,sumz=0;
	for(i=1; i<=n; i++)
	{
		cin>>x>>y>>z;
		sumx=sumx+x;
		sumy=sumy+y;
		sumz=sumz+z;
	}
	if(sumx==0 && sumy==0 && sumz==0)
	{
		cout<<"YES"<<" ";
	}
	else
	{
		cout<<"NO"<<" ";
	}
	return 0;
}
