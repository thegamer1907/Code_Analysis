#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvvi> vvvvi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi S(n), C(n);
    for (int i = 0; i < n; ++i) cin >> S[i];
    for (int i = 0; i < n; ++i) cin >> C[i];
    vi DP(n, 1e13);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (S[i] > S[j]) DP[i] = min(DP[i], C[i] + C[j]);
        }
    }
    ll ans = 1e13;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (S[i] > S[j]) ans = min(ans, C[i] + DP[j]);
        }
    }
    cout << (ans == 1e13 ? -1 : ans) << "\n";
    return 0;
}