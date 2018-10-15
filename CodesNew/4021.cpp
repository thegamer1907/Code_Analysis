#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
const ll maxn=200005;
ll a[maxn];
ll sum[maxn];
ll kil[maxn];
int main()
{
	ll n,q;
	scanf("%lld %lld",&n,&q);
	sum[0]=0;
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	for(ll i=1;i<=q;i++){
		scanf("%lld",&kil[i]);
	}
	/*
	for(ll i=1;i<=n;i++){
		printf("%lld ",sum[i]);
	}
	printf("\n");
	*/
	ll pos=1;
	ll xsu=0;
	for(ll i=1;i<=q;i++){
		int f=pos;
		pos=lower_bound(sum,sum+n+1,kil[i]+sum[pos-1]+xsu)-sum;
		//printf("----\n");
		//printf("f==%lld xsu==%lld\n",f,xsu);
		//printf("pos==%lld\n",pos);
		if(pos==n+1){
			printf("%lld\n",n);
			xsu=0;
			pos=1;
		}else if(pos==n&&kil[i]+sum[f-1]+xsu==sum[n]){
			printf("%lld\n",n);
			xsu=0;
			pos=1;
		}else{
			if(sum[pos]==kil[i]+sum[f-1]+xsu){
				printf("%lld\n",n-pos);
				pos=pos+1;
				xsu=0;
			}else{
				printf("%lld\n",n-pos+1);
				xsu=(kil[i]+sum[f-1]+xsu)-sum[pos-1];
			}
		}
		
		//printf("-----\n");
	}
	
	
	return 0;
 } 