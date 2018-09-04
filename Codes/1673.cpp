#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int maxn = 10000 + 10;

LL n,m,k;

bool ok(LL x)
{
	LL res=0;
	for(LL i=1;i<=n;i++)
	{
		if(x/i>=m) res+=m;
		else res+=x/i;
	}
	return res<k;
}

void solve(LL l,LL r)
{
	while(l<r)
	{
		LL mid = (l+r)/2;
		if(ok(mid)) 
			l=mid+1;
		else 
			r=mid;
	}
	cout<<r<<'\n';
}

int main()
{
	cin>>n>>m>>k;
	solve(1,n*m);
	
	return 0;	
}