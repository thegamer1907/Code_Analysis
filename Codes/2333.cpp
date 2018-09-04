//                                        KiSmAt 
#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp" 
#include "ext/pb_ds/tree_policy.hpp"
#include "ext/pb_ds/detail/standard_policies.hpp"
using namespace __gnu_pbds;
using namespace std;

typedef long long  ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> multiordered_set;

const int N = 1e7 + 10;
const long long NN = 2 * 1e2 ;
const long long INF = 1e18;
const long long mod = 1e9 + 7;

ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}

map<ll, ll> mp;
priority_queue<ll> pq[N];
vector<ll> v;
set<ll> s;
multiordered_set ss;

ll res;
ll a[N];
ll aa[N];
ll prime[N];

void siev(){
    prime[1] = 1;
    for (int i = 2; i < N; ++i){
        if(!prime[i]){
            v.push_back(i);
            for (int j = i + i; j < N; j += i){
                prime[j]  = 1;    
            }
        }
    }
}

void solve(){
    for (int i = 0; i < v.size(); ++i){ 
        for (int j = v[i]; j < N; j += v[i]){
            a[v[i]] += aa[j];
        }
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    siev();
    ll n, q, l, r, x;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> x;
        ++aa[x]; 
    }
    solve();
    for (int i = 1; i < N; ++i){
        a[i] += a[i - 1];
    }
    cin >> q;
    while(q--){
        cin >> l >> r;
        cout << a[min(r, (ll)N -1)] - a[min(l - 1, (ll)N - 1)] << "\n";
    }
}
// nEro