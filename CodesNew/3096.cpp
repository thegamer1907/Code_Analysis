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
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define L(x) (2*(x))
#define R(x) ((2*(x))+1)
#define pii pair<int , int>

using namespace std;
typedef long long ll;

const int N = 1e6 + 5, Mod = 1e9 + 7, MAXN = 3e5 + 10, LG = 25 , M = 1e7 + 1, P = 727, Sq = 500;
const ll inf = 3e18 + 10;


int n, k, ans = -1, dx = -1, a[N], ps[N];
int main(){
      ios_base::sync_with_stdio(0); cin.tie(0);
      cin >> n >> k;
      for(int i = 1; i <= n; i++){
            cin >> a[i];
            ps[i] = ps[i - 1] + (1 - a[i]);
      }
      for(int i = 1; i <= n; i++){
            int l = i - 1, r = n + 1;
            while(r - l > 1){
                  int mid = (r + l)/2;
                  if(ps[mid] - ps[i - 1] <= k)
                        l = mid;
                  else
                        r = mid;
            }
            if(l - i + 1 > ans)
                  ans = l - i + 1, dx = i;
      }
      cout << ans << '\n';
      for(int i = 1; i < dx; i++)
            cout << a[i] << " ";
      for(int i = dx; i < dx + ans; i++)
            cout << 1 << " ";
      for(int i = dx + ans; i <= n; i++)
            cout << a[i] << " ";
      return 0;
}
