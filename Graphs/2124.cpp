#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll val[10002];

int main()
{
	ios::sync_with_stdio(0);
	ll n,m,i;
	cin >> n >> m;
	for(i=0;i<=10000;i++)
		val[i]=INT_MAX;
	val[n]=0;
	deque<ll>Q;
	Q.push_back(n);
	while(!Q.empty())
	{
		ll u = Q.front();
		Q.pop_front();
		ll x=2*u;
		ll y=u-1;
		if(y>=1)
		{
			if(val[y]==INT_MAX)
			{
				val[y]=val[u]+1;
				Q.push_back(y);
			}
		}
		if(x<=10000)
		{
			if(val[x]==INT_MAX)
			{
				val[x]=val[u]+1;
				Q.push_back(x);
			}
		}
	}
	cout << val[m] << "\n";
	return 0;
}