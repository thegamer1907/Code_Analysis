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
const double EPS = 1e-9;
// const int INF = (2e9);
const ll INF = ((ll)1 << 61);

const ll P = 1e9 + 7;

ll n, S;
vector<ll> sec;

ll val(ll k, vector<ll> &nums) {

  for (int i = 0; i < n; ++i)
  {
    sec[i] = nums[i] + (i+1)*k;
  }
  sort(sec.begin(), sec.end());
  ll tot = 0;


  for (int i = 0; i < k; ++i)
  {
    tot += sec[i];
  }
  return tot;
}

ll good(int k, vector<ll> &nums) {
  return val(k, nums) <= S;
}

int main(){
  fast_io;

  cin >> n >> S;

  vector<ll> nums(n);
  sec.resize(n);
  for (int i = 0; i < n; ++i) cin >> nums[i];

  ll l=1, r = nums.size();

  if(!good(1, nums)) {
    cout << 0 << " " << 0 << endl;
  }
  else if(good(r, nums)){
    cout << r << " " << val(r, nums) << endl;
  }
  else {
    ll mid;
    while(l+1 < r){
      mid = l + (r-l)/2;

      if(good(mid, nums)) l = mid;
      else r = mid;
    }

    cout << l << " " << val(l, nums) << endl;
  }

  return 0;
}
