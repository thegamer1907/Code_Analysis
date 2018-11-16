#include<bits/stdc++.h>
#define ll long long
#define sz(x) (ll)(x.size())
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    map<ll,priority_queue<ll> > mp;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin>>x;
        mp[x].push(i);
    }
    vector<ll> v;
    for(auto x:mp){
        v.push_back(x.second.top());
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < m; i++) {
        ll q;
        cin>>q;
        q--;
        cout << sz(v) - (lower_bound(v.begin(), v.end(), q)-v.begin())<<"\n";
    }
}