#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_set>
#include<queue>
#include<cmath>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()

using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<bool> a(100);
    for (int i = 0; i < n; ++i) {
        int x = 0;
        for (int j = 0; j < k; ++j) {
            int t;
            cin >> t;
            x |= t << j;
        }
        a[x] = true;
    }
    for (int i = 0; i < 1 << k; ++i) {
        for (int j = 0; j < 1 << k; ++j) {
            if (!(i & j) && a[i] && a[j]) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}

