//
// Program by ilbonius2000
//
#pragma GCC optimize("O3")
#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>

#include <memory.h>
#include <assert.h>

# define in freopen("", "r", stdin)
# define ou freopen("", "w", stdout)
# define IOS ios_base::sync_with_stdio(false)

# define ull unsigned long long
# define ll long long
# define pb push_back
# define ppb pop_back
# define mp make_pair
# define ld long double

using namespace std;

const ll N = 1e7 + 10;
const ll mod = 1e9 + 7;
const ll inf = -1e18;
const ll INF = 1e18;

ll n, x, l, r, m;
ll us[N], dp[N], color[N];

void solve() {
   cin >> n;
   for(int i = 1;i <= n;i++) {
      cin >> x;
      us[x]++;
   }
   for(ll i = 2;i <= 10000000;i++) {
      if(color[i] == 0) {
         for(ll j = i;j <= 10000000;j += i) {
            color[j] = 1;
            dp[i] += us[j];
         }
      }
      dp[i] += dp[i - 1];
   }
   cin >> m;
   for(int i = 1;i <= m;i++) {
       cin >> l >> r;
       cout << dp[min(N - 10, r)] - dp[min(N - 10, l) - 1] << '\n';
   }
}

int main() {
IOS, cin.tie(NULL), cout.tie(NULL);
     solve();
     return 0;
}
