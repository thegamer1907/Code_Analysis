#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 100;
int sum[maxn],r,m,n,t,x;
int main()
{
	cin>>n>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		sum[i]=sum[i-1]+x;
		if ( sum[i]-sum[m] > t)
		      m++;
		r = max( ( i-m ) , r);
	}
	cout<<r;
}