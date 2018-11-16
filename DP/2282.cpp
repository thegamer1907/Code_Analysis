#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<int> arr(n), dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    set<int> freq;
    for (int i = n-1; i >= 0; --i) {
        freq.insert(arr[i]);
        dp[i] = freq.size();
    }
    
    for (int i = 0, v; i < m; ++i) {
        cin >> v;
        cout << dp[v-1] << '\n';
    }
}