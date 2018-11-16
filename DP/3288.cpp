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
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define L(x) (2*(x))
#define R(x) ((2*(x))+1)
#define pii pair<int , int>

using namespace std;
typedef long long ll;

const int N = 2e6 + 5 , MOD = 1e9 + 7 , MAXN = 1e8 + 1000 , LG = 30 , M = 1e6 + 5 , P = 727 , Sq = 100;
const ll inf = 3e18 + 10;

bool mark[N];

int main(){
      ll l, r, ans = 0; cin >> l >> r;
      for(int i = 61; i >= 0; i--){
            if(((1ll << i) & r) != ((1ll << i) & l))
                  return cout << (1ll << (i + 1)) - 1, 0;
      }
      return cout << 0, 0;


}
