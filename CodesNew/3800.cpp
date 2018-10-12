#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define MOD 1000000007
#define mod(a) (a)%MOD
#define pb push_back
#define ft first
#define sd second
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;*/
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(),v.end()
#define endl '\n'
ll gcd(ll a,ll b){if(a==0) return b; return gcd(b%a,a);}
ll powm(ll base,ll exp,ll mod=MOD) {base%=mod;ll ans=1;while(exp){if(exp&1LL) ans=(ans*base)%mod;exp>>=1LL,base=(base*base)%mod;}return ans;}


int main(){
       sync;
       ll n;cin>>n;
       vector<ll> a(n);
       ll sum=0;
       for (ll i = 0; i < n; i++){
                   cin>>a[i];sum+=a[i];
       }
       sort(a.begin(), a.end());
       ll k=sum/(n-1) + (sum%(n-1)?1:0);
       ll ans=max(a[a.size()-1],k);
       cout<<ans<<endl;
}
       