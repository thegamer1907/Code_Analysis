#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define inf 1e18
const int maxn=1e5+5; 
ll a[maxn];
int main()
{
	ll n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=1;i<=m;i++) scanf("%lld",&a[i]);
	a[m+1]=inf;
	int pre=0,v,ans=0,t;//pre是上一个下标志 
	if(0==a[1]%k) v=a[1]/k*k;
	else v=a[1]/k*k+k;
	for(int i=1;i<=m;i++){
		while(a[i]<=v) i++;
		i--;
		t=i-pre;
		pre=i;
		ans++;
		v+=t;
		if(a[i+1]<=v) continue;
		ll diff=(a[i+1]-v)/k*k;
		if((a[i+1]-v)%k) diff+=k;
		v+=diff;
	}
	printf("%d",ans);
	return 0;
}