#include<bits/stdc++.h>
using namespace std;

#define scl(x) scanf("%lld",&x)
#define sc(x)  scanf("%d",&x)
#define ll long long
#define lop(i,n) for(int i=0;i<n;++i)
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;

const int N=2e5+100;
ll arr[N];
ll pre[N];
int n;
map<ll,int> mp;

int main(){
#ifndef ONLINE_JUDGE
	freopen("i.txt","r",stdin);
#endif
	sc(n);
	for(int i=1;i<=n;i++){
		sc(arr[i]);
		pre[i]=arr[i]+pre[i-1];
		mp[pre[i]]++;
	}
	ll mx=0,sum=0;
	for(int len=1;len<=n;len++){
		--mp[pre[n-len+1]];
		sum+=arr[n-len+1];
		if(mp[sum])mx=max(mx,sum);
	}
	cout<<mx<<endl;
}
