#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
	
	int n,m,c,i,j;
	cin>>n;
	vector<int >b(n);
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	cin>>m;
	vector<int> g(m);
	for(i=0;i<m;i++)
	{
		cin>>g[i];
	}
	
	sort(b.begin(),b.end());
	sort(g.begin(),g.end());
	
	i=0;
	j=0;
	c=0;
	while(i<n&&j<m)
	{
		if(abs(b[i]-g[j])<=1)
		{
			c++;
			i++;
			j++;
		}
		else if(b[i]<g[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	cout<<c<<endl;
	return 0;	
}
