#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define p_b push_back
#define m_p make_pair

typedef long long ll;
typedef long double ld;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // LOCAL
    int n, a, b;
    cin >> n >> a >> b;
    a--, b--;
    vector < int > v(n, 0);
    v[a] = 1;
    v[b] = 1;
    int ans = 1;
    do {
        vector < int > v1;
        for (int i = 0; i < int(v.size()); i += 2) {
            if (v[i] + v[i + 1] == 2) {
                if (int(v.size()) == 2) {
                    cout << "Final!";
                }
                else cout << ans;
                return 0;
            }
            v1.p_b(max(v[i], v[i + 1]));
        }
        ans++;
        v = v1;
    }while(1);
}
