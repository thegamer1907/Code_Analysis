#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll nb,ns,nc,pb,ps,pc,r,b,s,c;
ll max_(ll a, ll b)
{
	return (a<b)?b:a;
}

bool check(ll x)
{
	ll ans=0;
	if (b>0) {
		ans+=max_(0,x*b-nb)*pb;
	}
	if (s>0) {
		ans+=max_(0,x*s-ns)*ps;
	}
	if (c>0) {
		ans+=max_(0,x*c-nc)*pc;
	}
	
	return (ans<=r);
	
}

int main()
{
	string S;
	cin>>S;
	
	int i;
	for (i=0;i<S.length();i++) {
		if (S[i]=='B')
			b++;
		else if (S[i]=='C')
			c++;
		else
			s++;
	}
	
	cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
	
	ll l=0,h=(ll)(1E15),m,ans;
	while (l<=h) {
		ll m=l+((h-l)>>1);
		// cout<<l<<" "<<m<<" "<<h<<endl;
		if (check(m)) {
			ans=m;
			l=m+1;
		}
		else
			h=m-1;
	}
	
	cout<<ans<<endl;
	return 0;
}
	
	