#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
#define ll long long
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define type int
#define X first
#define Y second
#define MAXN 200005
#define mod 1000000007
#define X first
#define Y second
bool chk(ll n,ll m){
	ll half = (n+1)/2;
	ll tot = 0;
	while(n){
		if(n > m){
			n -= m;
			tot += m;
		}else{
			tot += n;
			return tot >= half;
		}
		n -= (n)/10;
	}
	return 0;
}
int main(){
	ll n ; cin >> n;
	ll l = 0 , r = n;
	while(r - l > 1){
		ll m = (l+r) >>1;
		if(chk(n,m)){
			r = m;
		}else{
			l = m;
		}
	}
	cout << r;
}
