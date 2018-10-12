#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool f(ll n,ll p)
{
	ll cnt = 0ll, an = n;
	while(n>0){
		cnt += min(p,n);
		n-=min(p,n);
		n-=n/10;
	}
	return 2ll*cnt>=an;
}

int main()
{
	ll n;scanf("%I64d", &n);
	ll st = 1, ed = n;
	while(st<=ed)
	{
		ll piv = (st+ed)>>1;
		if(f(n,piv))ed = piv-1;
		else st = piv+1;
	} 
	printf("%I64d\n", st);
  
	return 0;
}