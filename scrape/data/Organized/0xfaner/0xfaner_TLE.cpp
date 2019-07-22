#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k;
ll s[100001];
int main(){
	scanf("%I64d%I64d%I64d",&n,&m,&k);
	for (int i=1;i<=m;i++) scanf("%I64d",&s[i]);
	sort(s+1,s+m+1);
	ll r=k,add=1,ans=0;
	while (r<=n){
		ll num=0;
		if (s[add]>r) r+=((s[add]-r-1)/k+1)*k;
		while (add<=m&&s[add]<=r) add++,num++;
		r+=num;
		if (add<=m) ans++;
	}
	printf("%I64d",ans+1);
	return 0;
}