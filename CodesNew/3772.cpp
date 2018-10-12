#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<n;i++)
#define REP1(i,n) for(ll i=1;i<=n;i++)
#define pb push_back
#define SZ(i) ll(i.size())
#define ALL(i) i.begin(),i.end()
#define MEM(i,n) memset(i,(n),sizeof(i))

ll n,m,a[103],mn,sum;
int main(){
	cin>>n>>m;
	REP(i,n)cin>>a[i],mn=max(mn,a[i]),sum+=a[i];
	ll left = mn*n - sum;
	if(m <= left)cout<<mn<<" ";
	else {
		ll ans = (m-left)/n;
		if(ans*n < m-left)ans++;
		cout<<ans+mn<<" ";
	}
	
	cout<<mn+m<<endl;
}
