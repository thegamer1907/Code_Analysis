#include <map>
#include <iostream>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    map<int, long long> m[3] = {};
    while (n--) {
        int a; cin >> a;
        if (a % k == 0) {
            m[2][a] += m[1][a/k];
            m[1][a] += m[0][a/k];
        }
        m[0][a]++;
    }
    long long ans = 0;
    for (auto x : m[2]) ans += x.second;
    cout << ans << endl;
}
