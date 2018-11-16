#include <bits/stdc++.h>
using namespace std;
#define int long long

/*struct node
{
    int x = 0;
    int l, r;
    node *left = nullptr, *right = nullptr;
    node(int l, int r) : l(l), r(r) {
        if (r - l > 1) {
            int m = (l + r) / 2;
            left = new node(l, m);
            right = new node(m, r);
        }
    }
    int query(int L, int R) {
        if (l >= R || r <= L)
            return 0;
        if (L <= l && r <= R)
            return x;
        return left->query(L, R) + right->query(L, R);
    }
}*/

signed main()
{
    cin.tie();
    cout.tie();
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    --a, --b;
    int r = 1;
    while (a / (1 << r) != b / (1 << r))
        ++r;
    if ((1 << r) == n)
        cout << "Final!";
    else
        cout << r;
}
