#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()

typedef long long ll;

template <typename T1, typename T2> inline void chkmin(T1 &x, T2 y) { if (y < x) x = y; };
template <typename T1, typename T2> inline void chkmax(T1 &x, T2 y) { if (y > x) x = y; };

void go(vector <int> &a, int v, int vl, int vr, int pos) {
    if (vl == vr) {
        a.pb(v);
        return;
    }

    a.pb(v);
    int vm = (vl + vr) / 2;
    if (pos <= vm)
        go(a, v + v, vl, vm, pos);
    else
        go(a, v + v + 1, vm + 1, vr, pos);

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    vector <int> ansa, ansb;
    go(ansa, 1, 0, n - 1, a - 1);
    go(ansb, 1, 0, n - 1, b - 1);

    int i;
    for (i = 0; i < n; ++i) {
        if (ansa[i] != ansb[i]) break;
    }


    if (i == 1)
        cout << "Final!" << endl;
    else
        cout << (int)log2(n) - i + 1 << endl;

    return 0;
}
