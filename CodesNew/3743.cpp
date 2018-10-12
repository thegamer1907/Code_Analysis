#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 0x3fffffff;
const ll inf = 0x7fffffffffffffff;
const int MAXN = 100010;

int main() {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    int Max = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        Max = max(a, Max);
    }
    int ans = (sum + m) / n;
    if (ans * n < sum + m)
        ans++;
    ans = max(ans, Max);
    cout << ans << " " << Max + m << endl;
}