#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
#define ll long long int
#define ppi pair<int,int>
#define ppl pair<ll,ll>
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define ff first	
#define ss second
#define inf 1e9
#define linf 1e18
#define reset(x) memset(x,0,sizeof(x))
#define rep(i,a,b) for(int i=a;i<b;i++)
void fastio(){	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(){
	ll n,q;
	cin>>n>>q;
	vector<ll> pre;
	ll x,sum=0;
	rep(i,0,n)
	{
		cin>>x;
		sum+=x;
		pre.push_back(sum);
	}
	ll cur=0;
	rep(i,0,q)
	{
		cin>>x;
		cur+=x;
		if(upper_bound(pre.begin(),pre.end(),cur)==pre.end())
			cur=0,cout<<n<<endl;
		else
			cout<<pre.end()-upper_bound(pre.begin(),pre.end(),cur)<<endl;
	}
}

int main(){
	fastio();
	int t;
	t=1;
	// cin>>t;
	solve();
	return 0;
}	