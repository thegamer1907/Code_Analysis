#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sc(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define p(n) printf("%d\n",n)
#define fi first
#define sec second
#define mp make_pair
#define pb push_back
#define INF 1LL*1e18
#define fio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int a[1000005];
vector<ll>v;
void rec(ll num,int sum)
{
	if(sum == 0){
		v.pb(num);
	}
	if(num >= 2e9) return;
	for(int i = num == 0 ? 1 : 0;i < min(sum+1,10);i++){
		rec(num*10+i,sum-i);
	}
}
int main()
{
	fio;
	int i,j,k,l,m,n,t,r,cnt;
	int flag = 0;
	ll ans = 0,an = 0;
	t = 1;
	while(t--){
		cin >> k;
		rec(0,10);
		sort(v.begin(),v.end());
//		cout << v.size() << endl;
		cout << v[k-1] << endl;
	}
}
