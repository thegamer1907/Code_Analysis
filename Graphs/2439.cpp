#include <ctype.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include<vector>
#include <iomanip>
using namespace std;
long long k=0,n,check=0,prev,m,summa;
vector<int> use ;
vector < vector <int> > a;
vector<long long> cost;
vector<int> order;
void dfs(long long s,long long col)
{
//	cout<<1;
	use[s]=1;
	if(col!=cost[s])
	{
	//	cout<<s<<" "<<col<<" "<<cost[s]<<endl;
		k++;
		col=cost[s];
	}	
	for(int i=0;i<a[s].size();i++)
	{
		if(use[a[s][i]]==0)
			dfs(a[s][i],col);
	}
	use[s]=2;
	
	
}
int main()
{
	long long s=0,b,e;
	cin>>n;
	use.resize(n);
	a.resize(n);
	cost.resize(n);
	for(long long i=1;i<n;i++)
	{
		cin>>b;
		b--;
		a[i].push_back(b);
		a[b].push_back(i);
	}
	for(long long i=0;i<n;i++)
	{
		cin>>cost[i];
	}
	dfs(0,0);
	cout<<k;
    return 0;
}






