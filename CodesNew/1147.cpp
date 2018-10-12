#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define F first
#define S second
#define sz(x) x.size()
#define mp make_pair
int a[100005];

void solve(){
	ll n;
	cin>>n;
	ll l=1,h=n;

	while(h-l>1)
	{
		ll c=n;
		ll m=(l+h)/2;
		ll amt=0;
		while(c>0)
		{
			amt+=min(c,m);
			c-=(min(c,m));
			ll tmp=c/10;
			c-=tmp;
		}
		if(amt>=(n+1)/2)
		h=m;
		else
		l=m+1;
	}
		ll c=n;
		ll m=l;
		ll amt=0;
		while(c>0)
		{
		//2out<<c<<endl;
			amt+=min(c,m);
			c-=(min(c,m));
			ll tmp=c/10;
			c-=tmp;
		}
		//cout<<amt<<endl;
		if(amt>=(n+1)/2)
		cout<<l;
		else
		cout<<h;

}
int main() {
	int t=1;
	//cin>>t;
	while(t--)
	solve();
	return 0;
}
