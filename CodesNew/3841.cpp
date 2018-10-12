#include<bits/stdc++.h>
#define ll long long
#define INF 2147483647
using namespace std;

ll n,a[100010];

inline ll cmp(ll a,ll b){
	return a>b;
}

int main(){
	scanf("%lld",&n);
	for(ll i=1; i<=n; i++) scanf("%lld",&a[i]);
	sort(a+1,a+1+n,cmp);
	
	ll l=0,r=INF,mid=(l+r)/2;
	while(l<r){
		ll ft=mid,i;
		for(i=1; i<=n; i++){
			if(a[i]>mid){
				l=mid+1;
				mid=(l+r)/2;
				break;
			}
			else{
				ft-=mid-a[i];
				if(ft<=0){
					r=mid;
					mid=(l+r)/2;
					break;
				}
			}
		}
		if(i==n+1&&ft>0){
			l=mid+1;
			mid=(l+r)/2;
		}
	}
	printf("%lld",l);
	return 0;
}