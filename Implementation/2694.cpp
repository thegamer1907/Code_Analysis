#include<bits/stdc++.h>
#define MAX 5002
#define pb push_back
#define For(i,s,e) for (int i=(s); i<(e); i++)
#define Debug_array(a,n) for (int i=(0); i<(n); i++) cout<<a[i]<<" "
#define Foe(i,s,e) for (int i=(s); i<=(e); i++)
#define Fod(i,s,e) for (int i=(s)-1; i>=(e); i--)
#define Mod 1000000007
#define pii pair<ll,ll>
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef long double ld;
int main(){
	ios_base::sync_with_stdio(false);
	
	ll n;cin>>n;
	ll a[n];For(i,0,n) cin>>a[i];
	ll ans[n];
	For(i,0,n) ans[a[i]-1]=i+1;
	For(i,0,n) cout<<ans[i]<<" ";
	cout<<endl; 
}