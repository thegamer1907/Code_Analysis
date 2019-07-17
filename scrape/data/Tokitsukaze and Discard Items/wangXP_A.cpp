#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

typedef long long ll;
#define inc(i,n) for (ll i=0;i<n;i++)
ll p[1000010];

int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	ll k0=k;
	inc(i,m) scanf("%I64d",p+i);
	ll rm=0,ans=0;
	ll i=0;
	while (i<m){
		ll drm=0;
		while (i<m && p[i]-rm<=k) i++,drm++;
		rm+=drm;
		if(drm==0) k+=k0*((p[i]-rm-k-1)/k0+1);
		else ans++;
	}
	cout<<ans<<'\n';
	return 0;
}