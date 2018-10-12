/* dsingh_24 */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll ,ll>
#define vll          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define hell 		1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

#define N  100005
ll n,q,i,j,a[200005],k[200005];
int main()
{
	ios
	cin>>n>>q;
	for(i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(i=1;i<=q;i++){
		cin>>k[i];
		k[i]+=k[i-1];
	}
	ll lst=0;
	for(i=1;i<=q;i++){
		ll idx=ubnd(a+1,a+n+1,k[i]-lst)-a;
		if(idx==n+1){
			lst=k[i];
			cout<<n<<"\n";
		}else{
			ll rem=n+1-idx;
			cout<<rem<<"\n";
		}
	}
	return 0;
}