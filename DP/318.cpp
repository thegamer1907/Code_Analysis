#include <bits/stdc++.h>

#define FILE_NAME "b"
#define PROBLEM_NAME "b"
#define SZ(x) ((int) x.size())
#define pb push_back
#define ppb pop_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int B = 4e6 + 1;
const double PI = acos(-1);

signed main() {
/*#ifdef LOCAL
    freopen(FILE_NAME".in", "r", stdin);
    freopen(FILE_NAME".out", "w", stdout);
#else
    freopen(PROBLEM_NAME".in", "r", stdin);
    freopen(PROBLEM_NAME".out", "w", stdout);
#endif*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a)
        cin >> i;
    int m;
    cin >> m;
    vector<int> b(m);
    for (int& i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(a[i] - b[j]) < 2) {
                ans++;
                b[j] = 999;
                break;
            }
        }
    }
    cout << ans;
    return false;
}
            
            

        

    


