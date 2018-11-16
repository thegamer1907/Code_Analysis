#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll N = 1e5 + 10, mod = 1e9 + 7;
int arr[N], w[N], dp[N];
vector <ll> b, g;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, c, l;
    cin >> n >> m;
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for (int i = n - 1; i > -1; i --){
        if (i == n - 1){
            dp[i] = 1;
            w[arr[i]] = 1;
        }
        else if (w[arr[i]] == 0){
            dp[i] = dp[i + 1] + 1;
            w[arr[i]] = 1;
        }
        else if (w[arr[i]] == 1)
            dp[i] = dp[i + 1];
    }
    for (int i = 0; i < m; i ++){
        cin >> l;
        cout << dp[l - 1] << "\n";
    }
    return 0;
}
