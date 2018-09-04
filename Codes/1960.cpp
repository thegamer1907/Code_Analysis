#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;

const long double eps = 1e-9;

#define MOD 1000000007
#define MAX 400005

#define X real()
#define Y imag()

typedef complex<double> point;
const double EPS = 1e-9;

int ar[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int ac[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

int main() {
#ifdef Adel_SaadEddin_PC
    freopen("input.txt", "r", stdin);
//    freopen("output.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);

    ll n, k; cin >> n >> k;
    vector<ll> ve;
    map<ll, ll> cnt, mp;
    
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        ve.push_back(x);
    }
    
    ll res = 0;
    if(k == 1) {
        for(auto x : ve)
            cnt[x]++;
        for(auto x : cnt)
            res += (1LL * x.second * (x.second - 1) * (x.second - 2) / 6);
        
        return cout << res << "\n", 0;
    }
    
    for(int i = n - 1; i >= 0; i--) {
        ll x = ve[i];
        res += mp[k * x];
        mp[x] += cnt[k * x];
        cnt[x]++;
    }
    
    cout << res << "\n";
    
    return 0;
}



