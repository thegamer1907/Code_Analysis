#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vi quasi, ans;
int DP[65][1000001];

int dp(int n, int ind) {
    if (n < 0) return 1e9;
    if (n == 0) return 0;
    if (ind == quasi.size()) return 1e9;
    if (DP[ind][n] != -1) return DP[ind][n];
    return DP[ind][n] = min(dp(n, ind+1), 1 + dp(n-quasi[ind], ind));
}

void reconstruct(int n, int ind) {
    if (n == 0) return;
    if (dp(n, ind+1) < 1 + dp(n-quasi[ind], ind)) {
        reconstruct(n, ind+1);
    } else {
        ans.push_back(quasi[ind]);
        reconstruct(n-quasi[ind], ind);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= (1<<6); ++i) {
        int k = i;
        int cur = 0, ind = 1;
        while (k != 0) {
            if (k & 1) cur += ind;
            ind *= 10;
            k /= 2;
        }
        quasi.push_back(cur);
    }
    reverse(quasi.begin(), quasi.end());
    for (int i = 0; i < 65; ++i) {
        for (int j = 0; j < 1000001; ++j) DP[i][j] = -1;
    }
    cout << dp(n, 0) << "\n";
    reconstruct(n, 0);
    for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
    cout << "\n";
    return 0;
}