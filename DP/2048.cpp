#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll maxn = 123456;

ll a[maxn];
main() {
    ios_base:: sync_with_stdio(false);
    ll i, n, m, l;
    cin >> n >> m;
    ll res[n];
    set <ll> st;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = n; i-- > 0;) {
        st.insert(a[i]);
        res[i] = st.size();
    }
    while(m--) {
        cin >> l;
        cout << res[l - 1] << endl;
    }
}