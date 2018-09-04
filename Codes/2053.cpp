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

#define MN int(2e5+5)

int arr[MN];
map<int, vector<int>> nums;
map<int, ll> sav;
int pre[MN];

int main()
{
  int n, k;
  cin >> n >> k;

  ll ans = 0;
  for( int i = 0; i < n; ++i )
  {
    cin >> arr[i];
    if( arr[i] % k == 0 && (arr[i] / k) % k == 0 && nums.count(arr[i] / k) )
    {
      ans += sav[arr[i] / k];
    }
    if( arr[i] % k == 0 )
    {
      pre[i] = nums[arr[i] / k].size();
      sav[arr[i]] += pre[i];
    }

    nums[arr[i]].push_back(i);
  }

  cout << ans << "\n";

  return 0;
}
