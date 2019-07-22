#include <bits/stdc++.h>

#define make_unique(x) sort(x.begin(),x.end()); (x).resize(unique(x.begin(),x.end()) - (x).begin())
typedef long long ll;

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> p(m);
    for (int i = 0; i < m; ++i)
        cin>>p[i];
    ll res = 0, num = 0, s = 0;
    auto it = p.begin();
    while (it != p.end()) {
        auto it2 = upper_bound(it, p.end(), k*num+s);
        if (it2 - it == 0)
           num++;
        else {
            s+=it2-it;
            res++;
        }
        it = it2;
    }
    cout << res;
    return 0;    
}