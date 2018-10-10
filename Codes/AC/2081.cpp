#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MAXN = 1e5 + 10;


unordered_map<int, int> bfr, aft;
vector <int> v;
int ans;

int32_t main() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    
    ++bfr[v[0]];
    for (int i = 2; i < v.size(); ++i)
        ++aft[(v[i])];
    
    for (int i = 1; i < v.size() - 1; ++i)
    {
        if (bfr[v[i]/k] && aft[v[i]*k] && (!(v[i]%k))) {
            ans += bfr[v[i]/k]*aft[v[i]*k];
            //cout << v[i] << " " << bfr[v[i]/k] << " " << aft[v[i]*k] << endl;
        }
        ++bfr[v[i]], --aft[v[i+1]];
    }
    
    cout << ans << endl;
    
}