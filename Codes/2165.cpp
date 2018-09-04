#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <deque>
#include <utility>
#include <sstream>

using namespace std;

#define mp make_pair
#define pb push_back
#define ALL(X) X.begin(), X.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const double PI = 3.14159265359;
const double EPS = 1e-6;
// const int INF = (2e9);
 const ll INF = (1LL << 62);

const ll P = 1e9 + 7;

bool cmp(pll a, pll b) {
  return (a.first - a.second) > (b.first - b.second);
}

int main(){
  fast_io;
  ll n;

  cin >> n;
  vector<ll> a(n);
  for(ll &x : a) cin >> x;

  int i = 0, j = n-1;

  ll sum1 = a[0];
  ll sum3 = a[n-1];
  
  ll res = 0;
  while(i < j) {
    if(sum1 == sum3) {
      res = sum1;
      i++;
      j--;
      if(i < j) {
        sum1 += a[i];
        sum3 += a[j];
      }
    } else if(sum1 < sum3){
      i++;
      if(i < j) sum1 += a[i];
    } else {
      j--;
      if(i < j) sum3 += a[j];
    }
  }
  cout << res << endl;
  return 0;
}