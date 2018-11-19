#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define size(s) (ll)(s).size()

const ll MAXN = 1e6 + 1;
const ll INF = 1e9;

void bye() {
    cout << '\n';
    exit(0);
}

bool is_between(int a, int b, int v) {
    if (a < b) {
        swap(a, b);
    }
    if (v >= b && v <= a) {
        return 1;
    }
    if (v <= b && v <= a) {
        return 0;
    }
    if (v >= a) {
        return 0;
    }
    return 1;
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    map<vector<int>, bool> mp;
    vector<vector<int> > g(n, vector<int> (k));
    for (int i = 0; i < n; i++) {
        vector<int> tmp(k);
        for (int j = 0; j < k; j++) {
            cin >> tmp[j];
            g[i][j] = tmp[j];
        }
        mp[tmp] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (auto v : mp) {
            bool f = 1;
            for (int j = 0; j < size(v.first); j++) {
                if ((int)g[i][j] + (int)v.first[j] >= 2) {
                    f = 0;
                    break;
                }
            }
            if (f) {
                cout << "YES";
                bye();
            }
        }
    }
    cout << "NO";
    bye();
}
