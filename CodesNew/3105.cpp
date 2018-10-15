#include <bits/stdc++.h>

#define FILE_NAME "660C"
#define SZ(x) ((int) x.size())
#define pb push_back
#define ppb pop_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

signed main() {
#ifdef LOCAL
    freopen(FILE_NAME".in", "r", stdin);
    freopen(FILE_NAME".out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
                  
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> pref(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i] = !a[i];
        if (i)
            pref[i] += pref[i - 1];    
    }       

    auto get = [&](int l, int r) {
        return pref[r] - (l ? pref[l - 1] : 0);    
    };

    int pos = -1;
    int to = -1;
    for (int i = 0; i < n; i++) {
        int l = i;
        int r = n - 1;
        int last = -1;

        while (l <= r) {
            int m = (l + r) >> 1;
            if (get(i, m) <= k) {
                last = m;
                l = m + 1;            
            } else r = m - 1;                    
        }

        if (pos == -1 || (last - i > to - pos)) {
            pos = i;
            to = last;        
        }
    }

    if (~pos)
        fill(a.begin() + pos, a.begin() + to + 1, 1);
    cout << to - pos + 1 << '\n';                             
    for (int x : a)                                
        cout << x << ' ';    
    return false;
}