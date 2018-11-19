#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
set<int> s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int p = 0;
        for(int j = 0; j < k; j++) {
            bool b;
            cin >> b;
            if(b) {
                p |= (1 << j);
            }
        }
        s.insert(p);
    }
    bool can = false;
    for(int i = 0; i < (1 << k) && !can; i++) {
        for(int j = 0; j < (1 << k) && !can; j++) {
            if((i & j) == 0) {
                can |= s.count(i) && s.count(j);
            }
        }
    }
    cout << (can ? "YES" : "NO") << endl;
    return 0;
}
