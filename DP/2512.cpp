// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
// IN THE NAME OF GOD
#include <bits/stdc++.h>

#define ff first
#define endl '\n'
#define ss second
#define ll long long
#define pb push_back
#define ld long double
#define pii pair <int, int>
#define pll pair <long long, long long>

using namespace std;
int n, a[111111], dp[111111], ans;
int main(){
  //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(a[i] > a[i - 1]) dp[i] = dp[i - 1] + 1;
    else dp[i] = 1;
    ans = max(ans, dp[i]);
  }
  cout << ans << endl;
}
//programmer: a_h_k_81
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
