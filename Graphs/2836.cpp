// IN THE NAME OF ALLAH
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include<cstring>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstdio>
#include <cmath>
#include <unordered_map>
#include <unordered_set>

#define F first
#define S second
#define mp make_pair
#define L(x) (2*(x))
#define R(x) ((2*(x))+1)
#define pii pair<int , int>

using namespace std;
typedef long long ll;

const int N = 1e5 + 5, Mod = 1e9 + 7, MAXN = 3e5 + 10, LG = 20 , M = 1e9, P = 727, Sq = 445 + 5;
const ll inf = 3e18 + 10;

long long p[N], n, a[N], dis[N], is[N], sz[N];
vector<pii> v[N];

void predfs(int u, int par){
      for(int i = 0; i < (int)v[u].size(); i++)
            if(v[u][i].F != par)
                  predfs(v[u][i].F, u), sz[u] += sz[v[u][i].F];
      sz[u]++;
      return ;
}
void dfscalc(int u, int par, int bad){
      for(int i = 0; i < (int)v[u].size(); i++){
            if(v[u][i].F == par)
                  continue;
            if(bad + v[u][i].S > a[v[u][i].F]){
                  is[v[u][i].F] = -1;
                  continue;
            }
            if(bad + v[u][i].S < 0)
                  dfscalc(v[u][i].F, u, 0);
            else
                  dfscalc(v[u][i].F, u, bad + v[u][i].S);
      }
      return ;
}
int main(){
      ios_base::sync_with_stdio(0); cin.tie(0);
      cin >> n;
      for(int i = 1; i <= n; i++)
            cin >> a[i];
      for(int i = 1; i <= n - 1; i++){
            int x, c; cin >> x >> c;
            v[i + 1].push_back(mp(x, c));
            v[x].push_back(mp(i + 1, c));
      }
      predfs(1, 1);
      dfscalc(1, 1, 0);
      int ans = 0;
      for(int i = 1; i <= n; i++)
            if(is[i] == -1)
                  ans += sz[i];
      return cout << ans, 0;
}
