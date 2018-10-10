#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <iostream>
#include <algorithm>
#define MAX 100007
#define MAXN 1007
#define MAXM 1007
#define INF  0x3f3f3f3f
#define NINF 0xc0c0c0c0
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef vector<ll> Vec;
typedef vector<Vec> Mat;
//================================================================================================
ll cost[MAX];
ll now_cost[MAX];
int main(){
	ll i,j,n,s;
	scanf("%lld %lld",&n,&s);
	for(ll i=1;i<=n;i++)scanf("%lld",cost+i);
	ll mid,l=-1,r=n+1;
	ll sum=0;
	while(l+1<r)
	{
		mid=(l+r)/2;
		for(ll i=1;i<=n;i++)now_cost[i]=cost[i]+mid*i;
		sort(now_cost+1,now_cost+n+1);
		sum=0;
		for(ll i=1;i<=mid;i++)sum+=now_cost[i];
		if(sum<=s)
			l=mid;
		else
			r=mid;
	}
	sum=0;
	if(l<0)
		l=0;
	for(ll i=1;i<=n;i++)now_cost[i]=cost[i]+l*i;
	sort(now_cost+1,now_cost+n+1);
	for(ll i=1;i<=l;i++)sum+=now_cost[i];
	printf("%lld %lld\n",l,sum);
    return 0;
}