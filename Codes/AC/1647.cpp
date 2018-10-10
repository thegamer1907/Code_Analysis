#include<bits/stdc++.h>
using namespace std;

#define LL long long
LL n,m,k;

void rd()
{
	scanf("%lld%lld%lld",&n,&m,&k); 
 } 

bool judge(LL x)
{
	LL an = 0; 
	for(LL i = 1; i <= n; i ++)
		an += min(m,x/i);
	return an >= k;
}

int main()
{
	rd();
	LL l = 1,r = n*m,mid;
	while(l+3 < r)
	{
		mid = (l+r)>>1;
		if(judge(mid))
		{
			r = mid;
		}
		else
			l = mid;
	//	cout<<l<<" "<<r<<" "<<mid<<"\n";
	}
	 
	for(LL i = l; i <= r; i ++)
		if(judge(i))
		{
			cout<<i<<"\n";
			return 0;
		}
	return 0; 
} 
/*
*/