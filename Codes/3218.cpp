#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    ll n, a[100005], t, u, ind[100005];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t, ind[i] = i;
        if(t <= i) a[i] = i + 1;
        else u = (t - i - 1) / n + 1, a[i] = u * n + i + 1;
    }
    sort(ind, ind + n, [&](int x, int y) {
        return a[x] < a[y];
    });
    cout << ind[0] + 1 << endl;
    return 0;
}