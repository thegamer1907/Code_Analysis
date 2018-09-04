#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi V(n), PRE(n);
    ll ans = 0, cur = 0;
    for (int i = 0; i < n; ++i) cin >> V[i];
    map<ll, int> M;
    for (int i = 0; i < n; ++i) {
        cur += V[i];
        PRE[i] = cur;
        M[cur] = 1;
    }
    cur = 0;
    for (int i = n-1; i >= 0; --i) {
        cur += V[i];
        M[PRE[i]]--;
        if (M[cur]) ans = cur;
    }
    cout << ans << "\n";
    return 0;
}
