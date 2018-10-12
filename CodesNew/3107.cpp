// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
// IN THE NAME OF GOD
#include <bits/stdc++.h>
#define pii pair <int, int>
#define pll pair <long long, long long>
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
using namespace std;
const int MAXN = 3e5 + 35;
int n, k, a[MAXN], dp[MAXN], L, R, cnt;
int main(){
  //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i] = dp[i - 1] + (a[i] == 0);
    } 
    for (int i = 1; i <= n; i++) {
        int l = i, r = n + 1;
        while (l < r - 1) {
            int mid = (l + r) / 2;
            if (dp[mid] - dp[i - 1] <= k) l = mid;
            else r = mid;
        }
        if (dp[l] - dp[i - 1] <= k) {
            if (l - i + 1 > cnt) {
                cnt = l - i + 1;
                L = i, R = l;
            }
        } 
    }
    for (int i = L; i <= R; i++) a[i] = 1;
    cout << cnt << endl;
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
}
//programmer: a_h_k_81
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
