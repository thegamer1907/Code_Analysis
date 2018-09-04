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
#define out return 0
using namespace std;
ll mn=INT_MAX;
ll mx=INT_MIN;
const ll mv=1000005;
const double pi=3.141592653589793238462643;
ll n,k,a[mv],c[mv],d[mv],ans;
map<ll,ll> b;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>n>>k;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		if(a[i]%k==0&&i){
			c[i]=b[a[i]/k];
		}
		b[a[i]]++;
	}
	b.clear();
	for(int i=n-1;i>=0;--i){
		d[i]=b[a[i]*k];
		b[a[i]]++;
	}
	for(int i=0;i<n;++i){
		ans+=c[i]*d[i];
	}
	cout<<ans;
}