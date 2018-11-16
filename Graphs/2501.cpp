#include <bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 11111;
pair<int, int> ed[N];
int col[N];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 2; i <= n; i++) {
        int j;
        cin >> j;
        ed[i] = make_pair(i, j);
    }
    for(int i = 1; i <= n; i++) {
        cin >> col[i];
    }
    int ans = 1;
    for(p : ed) {
        ans += col[p.first] != col[p.second];
    }
    cout << ans << endl;
    return 0;
}
