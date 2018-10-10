#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define clean(a,x) memset(a,x,sizeof(a))
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define endl '\n'
#define pii pair<int,int >
#define fi first
#define se second
#define s(x) scanf("%d",&x)
#define p(x) printf("%d ",x)
#define sl(x) scanf("%lld",&x)
#define pl(x) printf("%lld ",x)
#define ss(x) scanf("%s",&x)
#define ps(x) printf("%s ",&x)
#define nl printf("\n")
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 200005
#define N 10000007
ll poww(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}

ll prime[N], ans[N];
vector <ll> pr;


void sieve(){
	prime[0] = 0;
	prime[1] = 1;
	for(ll i = 2; i < N; i++){
		if(prime[i] == 0){
			prime[i] = i;
			pr.pb(i);
			if(i * i > N)
				continue;
			for(ll j = i + i; j < N; j += i){
				if(!prime[j])
				prime[j] = i;
				
			}
		}
	}
}

int main(){
	fast;
	sieve();
	ll n, i, x, m, y;
	cin >> n;
	for(i = 0 ; i < n; i++){
		cin >> x;
		while(x > 1){
			y = prime[x];
			ans[y] ++;
			while(x%y == 0 && x > 1)
				x /= y;
		}
	}
	for(i = 1 ; i < N; i++)
		ans[i] += ans[i - 1];
	cin >> m; 
	while(m --){
		cin >> x >> y;
		x = min(x, (ll)N - 7);
		y = min (y, (ll)N - 7);
		if(x > y)
			cout << "0" << endl;
		else
			cout << ans[y] - ans[x - 1] << endl;
	}
	return 0;
}