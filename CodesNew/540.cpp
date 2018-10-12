#include <bits\stdc++.h>

using namespace std;

typedef long long li;

li const N = 1e7 + 4;
li const MAXN = 1e6 + 20;
li a[MAXN];
li b[MAXN];
li p[N];
li was[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);


    li n;
    cin >> n;

    unordered_map <li, li> cnt;

    for (li i = 1; i <= n; ++i) {
        cin >> a[i];
        was[a[i]]++;
    }

    for (li i = 2; i < N; ++i) {
        if (p[i] == 0) {
            if (was[i] != 0) cnt[i] += was[i];
            for (li j = i * 2; j < N; j += i) {
                p[j] = 1;
                if (was[j] != 0) cnt[i] += was[j];
            }
        }
    }

    li sz = 0;
    for (auto i : cnt) {
        b[sz++] = i.first;
    }

    sort(b, b + sz);
    a[0] = cnt[b[0]];

    for (li i = 1; i < sz; ++i) {
        a[i] = a[i - 1] + cnt[b[i]];
    }

    li q;
    cin >> q;

    while (q--) {
        li l, r;
        cin >> l >> r;
        li left = upper_bound(b, b + sz, l - 1) - b;
        li right = upper_bound(b, b + sz, r) - b - 1;
        if (left > right) {
            cout << 0 << endl;
        }
        else {
            cout << a[right] - ((left - 1 >= 0) ? a[left - 1] : 0) << endl;
        }
    }


    return 0;
}