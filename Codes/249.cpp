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

const ll N = 1e5 + 10;
const ll mod = 1e9 + 7;
const ll inf = -1e18;
const ll INF = 1e18;

ll n, a[N], b[N], c[N], l, r, m, q;

void solve() {
   cin >> n;
   for(int i = 1;i <= n;i++) {
       cin >> a[i];
       b[i] = c[i - 1] + 1;
       c[i] = c[i - 1] + a[i];
   }
   cin >> m;
   for(int i = 1;i <= m;i++) {
       cin >> q;
       l = 1, r = n;
       while(r - l > 1) {
           int mid = (r + l) >> 1;
           if(c[mid] < q) {
               l = mid;
           }
           else {
               r = mid;
           }
       }
       if(b[l] <= q && c[l] >= q) cout << l << '\n';
       else {
           cout << r << '\n';
       }
   }
}

int main() {
     solve();
     return 0;
}
