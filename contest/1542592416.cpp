#include <map>
#include <set>
#include <unordered_set>
#include <list>
#include <cmath>
#include <stack>
#include <queue>
#include <bitset>
#include <cstdio>
#include <climits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <array>
#include <assert.h>
#include <functional>
#define _USE_MATH_DEFINES
#include <math.h>
#include <complex>

using namespace std;
typedef long long ll;
#define ln '\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define drep(i,n) int i = 0;for(;i<(n);++i)
#define FOR(i,s,e) for(int i=s;i<=(e);++i)
#define FORR(i,s,e) for(int i=s;i>=(e);--i)
#define fore(a, x) for(auto& a : x)
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define ft first
#define sd second
#define pb push_back
#define eb emplace_back
#define all(a) a.begin(),a.end()
#define Fill(a,b) memset(a,b,sizeof(a))
template<typename T1, typename T2> bool Max(T1& a, T2 b) { return a<b ? a = b, 1 : 0; }
template<typename T1, typename T2> bool Min(T1& a, T2 b) { return a>b ? a = b, 1 : 0; }


const int N = 1000, inf = 10000;
string a[N];


void solve() {
  string str,str2;
  int n;
  cin >> str >> n;
  bool has0 = 0, has1 = 0;
  rep(i, n) {
    cin >> str2;
    if (str == str2) {
      cout << "YES" << ln;
      return;
    }
    if (str[0] == str2[1]) has0 = 1;
    if (str[1] == str2[0])has1 = 1;
  }
  if (has0&&has1)cout << "YES" << ln;
  else cout << "NO" << ln;
  
}

void init() {
  
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(0); cout.setf(ios::fixed); cout.precision(20);
  //freopen("C:\\Users\\LENOVO\\Documents\\Visual Studio 2015\\Projects\\Test\\Input\\in.in", "r", stdin);

  init();
  int TC = 1;
#if 0
  cin >> TC; cin.get();
#endif
  FOR(TI, 1, TC) {
    //cout << "Case #" << TI << ": ";
    solve();
  }
  
  
  return 0;
}

