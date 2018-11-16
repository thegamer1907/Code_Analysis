#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define pii pair <int, int>
#define endl '\n'
//#define int long long

using namespace std;

const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // LOCAL
    int n, a, b;
    cin >> n >> a >> b;
    set <int> have;
    for (int i = 0; i < n; i++) have.insert(i + 1);
    int it = 1;
    while (true) {
        set <int> add;
        while (have.size()) {
            int x = *have.begin();
            have.erase(have.begin());
            int y = *have.begin();
            have.erase(have.begin());
            if (x == a && y == b) {
                if ((1 << it) == n) cout << "Final!";
                else cout << it << endl;
                return 0;
            }
            if (y == a && x == b) {
                if ((1 << it) == n) cout << "Final!";
                else cout << it << endl;
                return 0;
            }
            if (x == a || y == a) {
                add.insert(a);
            } else if (x == b || y == b) add.insert(b);
            else add.insert(x);
        }
        have = add;
        it++;
    }
    return 0;
}
