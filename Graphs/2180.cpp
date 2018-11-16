#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll n,m;
	cin >> n >> m;
	ll si = 2*max(n,m)+2;
	ll vis[si],i,j,tem=INT_MAX;
	for(i=0;i<si;i++)
		vis[i]=tem;
	deque<ll>Q;
	Q.push_back(n);
	vis[n]=0;
	while(!Q.empty())
	{
		ll x = Q.front();
		Q.pop_front();
		ll c_1 = 2*x;
		ll c_2 = x-1;
		if(c_1<si && c_1 >=0 && vis[c_1]>vis[x]+1)
		{
			Q.push_back(c_1);
			vis[c_1] = min(vis[c_1],vis[x]+1);
		}
		if(c_2 < si && c_2 >=0 && vis[c_2]> vis[x]+1)
		{
			Q.push_back(c_2);
			vis[c_2] = min(vis[c_2],vis[x]+1);
		}
	}
	cout << vis[m] << "\n";
	return 0;
}