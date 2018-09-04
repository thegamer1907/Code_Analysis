#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define F first
#define S second
#define mod 1000000007
#define maxn 100005
#define inf 1e18
#define boost ios::sync_with_stdio(false);cin.tie(0)

ll n, k;
ll a[200005];
map<ll, vector<int> > mp;

int main(){
    boost;

    cin>>n>>k;

    rep(i, 0, n){
        cin>>a[i];
        mp[a[i]].pb(i);
    }

    ll ans = 0;

    rep(i, 1, n-1){
        if(a[i]%k == 0){
            ll k1 = lower_bound(mp[a[i]/k].begin(), mp[a[i]/k].end(), i) - mp[a[i]/k].begin();
            ll k2 = mp[a[i]*k].size() - (upper_bound(mp[a[i]*k].begin(), mp[a[i]*k].end(), i) - mp[a[i]*k].begin());

            ans += k1*k2;
        }

    }

    cout<<ans;
}
