#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<string, string> mss;

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define trace(x) cerr << #x << " = " << (x) << endl
#define inf 0x3f3f3f3f
#define infl 0x3f3f3f3f3f3f3f3fL
#define mod int(1e9+7)

map<int, int> cnt; // cnt[x] is instances of x already found
map<int, ll> dp; // dp[x] is the sum of the instances of x/k already found, for each instance of x

int main()
{
  int n, k, val;
  cin >> n >> k;

  ll ans = 0;
  for( int i = 0; i < n; ++i )
  {
    cin >> val;
    if( val % k == 0 )
    {
      ans += dp[val / k];
      dp[val] += cnt[val / k];
    }
    cnt[val]++;
  }

  cout << ans << "\n";

  return 0;
}
