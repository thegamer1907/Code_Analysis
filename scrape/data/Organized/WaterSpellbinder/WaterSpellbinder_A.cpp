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
    ll res = 0, num = 1, s = 0, s1 = 0;
    /*
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
    */
    for (int i = 0; i < m; ++i) {
        if (p[i] <= k*num+s) {
            s1++;
        } else {
            if (s1 == 0)
                if ((p[i] - (k*num+s)) % k == 0)
                    num += (p[i] - (k*num+s))/k;
                else
                    num += (p[i] - (k*num+s))/k +1;
            else {
                s+=s1;
                s1 = 0;
                res++;
            }
            i--;
        }
    }
    if (s1 != 0)
        res++;
    cout << res;
    return 0;    
}