#include<bits/stdc++.h>
#define MAX 5002
#define pb push_back
#define For(i,s,e) for (ll i=(s); i<(e); i++)
#define Debug_array(a,n) for (ll i=(0); i<(n); i++) cout<<a[i]<<" "
#define Foe(i,s,e) for (ll i=(s); i<=(e); i++)
#define Fod(i,s,e) for (ll i=(s)-1; i>=(e); i--)
#define Mod 1000000007
#define pii pair<ll,ll>
#define fi first
#define se second
#define endl "\n"

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	
	ll n,k;cin>>n>>k;

	ll sum = 0;
	k = 240-k;
	ll ans = 0;
	For(i,0,n){
		sum += (i+1)*5;
		if(sum>k){
			break;
		}
		ans++;
	}
	cout<<ans<<endl;
}