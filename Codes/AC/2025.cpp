#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
map < ll , ll > dp[3];
ll n, k, a[200005], ans, x, y, z;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >>n>>k;
    for (int i = 1; i <= n; ++i){
        cin >>a[i];
        x = a[i];
        if (x % k == 0){
            y = x / k;
            ans += dp[2][y];
            dp[2][x] += dp[1][y];
        }
        dp[1][x]++;
    }
    cout <<ans;
}
