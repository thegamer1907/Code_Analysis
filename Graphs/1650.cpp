#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#define IOS { ios :: sync_with_stdio(false); cin.tie(0); }

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int maxn = 1e5;

const ll md = 1e9 + 7;

int main() {
    IOS;
    int n, t; cin >> n >> t;
    
    int cur = 1;
    for (int i = 1; i <= n-1; i++) {
        int a; cin >> a;
        if (cur == t) {
            cout << "YES" << endl;
            return 0;
        }
        if (cur == i) cur += a;
    }
    if (cur == t) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}

