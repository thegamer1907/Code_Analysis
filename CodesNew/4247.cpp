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

const int N = 5e5 + 5, Mod = 1e9 + 7, MAXN = 1e3 + 10, LG = 20 , M = 1e9, P = 727, Sq = 445 + 5;
const ll inf = 3e18 + 10;

string ans[N], s[N];
int n;

void Solve(){
      ans[n] = s[n];
      for(int i = n - 1; i >= 1; i--){
            int ind = 0;
            bool sw = false;
            while(1){
                  if(ind == (int)s[i].size() || ind == (int)ans[i  + 1].size())
                        break;
                  if(s[i][ind] < ans[i + 1][ind]){
                        sw = true;
                        break;
                  }
                  if(s[i][ind] > ans[i + 1][ind])
                        break;
                  else
                        ans[i] += s[i][ind];
                  ind++;
            }
            while(sw && ind < (int)s[i].size())
                  ans[i] += s[i][ind++];
      }
      return ;
}
int main(){
      ios_base::sync_with_stdio(0); cin.tie(0);
      cin >> n;
      for(int i = 1; i <= n; i++)
            cin >> s[i];
      Solve();
      for(int i = 1; i <= n; i++)
            cout << ans[i] << '\n';
      return 0;
}
