////////////////////////////////////
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
//\\\\by Kayirly Mukhametkarim\\\\//
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//
////////////////////////////////////
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define FOR(i,x,y) for(int i=x;i<=y;++i)
#define FORN(i,x,y) for(int i=x;i>=y;--i)
#define ll long long int
#define ull unsigned ll
#define vec vector
#define bp pop_back
#define pii pair<ll,ll>
#define out return
using namespace std;
const ll mx=INT_MAX;
const ll mn=INT_MIN;
const ll mv=1000005;
const double pi=3.141592653589793238462643;
ll n,s,a[mv],ans,v[mv],res;
ll ch(ll k){
	for(int i=0;i<n;++i){
		v[i]=a[i]+(i+1)*k;
	}
	ll sum=0;
	sort(v,v+n);
	for(int i=0;i<k;++i){
		sum+=v[i];
	}
	return sum;
}
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>n>>s;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	ll l=1,r=n,x;
	while(l<=r){
		ll m=(l+r)/2;
		x=ch(m);
		if(x<=s){
			l=m+1;
			ans=m;
			res=x;
		}
		else{
			r=m-1;
		}
	}
	cout<<ans<<" "<<res;
}