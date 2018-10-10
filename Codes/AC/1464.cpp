#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>

typedef long long ll;

ll const mod = 1e9+7;

ll n,i,j,k,t,x,l,r,mid;
ll a[100005];

ll check(int p){
	vector<ll> b;
	ll m = p;
	for(i=0;i<n;i++){
		b.pb(a[i]+m);
		m+=p;
	}
	sort(b.begin(), b.end());
	for(m=i=0;i<p;i++)
		m+=b[i];
	return m;
}

int main(){
	scanf("%lld %lld", &n, &k);
	for(i=0;i<n;i++)
		scanf("%lld", a+i);
	l=0, r=n;
	mid = (l+r+1)>>1;
	while(l<r){
		t = check(mid);
		if(t<=k)
			l = mid;
		else
			r = mid-1;
		mid = (l+r+1)>>1;
	}
	printf("%lld %lld\n", l, check(l));
	return 0;
}