#include<bits/stdc++.h>
using namespace std;

long long int solve()
{
	long long int n,m,k,l;
	cin >>n>>m>>k;
	long long int a[m];
	for(int i =0 ;i < m ;i++)
		cin >>a[i];
	int last=0;
	long long int cnt=0,d=1;
	l=k;
	while(k<=n)
	{	
		 d = upper_bound(a,a+m, k+last) - a- last;
		
		if(d>0)
		{
			cnt++;
			last+=d;
		}
		else
		k+=l;
		//cout<<d<<endl;
	}
	return cnt;
}

int main()
{
	ios:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cout<<solve();
	
	return 0;
}