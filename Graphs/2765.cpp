#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    set<int> s;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        s.insert({a, b});
    }
    cout << n - 1 << endl;
    for(int i = 1; i <= n; i++) {
        if(!s.count(i)) {
            for(int j = 1; j <= n; j++) {
                if(j != i) {
                    cout << i << " " << j << endl;
                }
            }
            return 0;
        }
    }
    return 0;
}
