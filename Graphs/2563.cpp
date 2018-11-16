#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <tuple>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <numeric>
#include <cassert>
#include <functional>
using namespace std;

typedef unsigned long long int llui;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
constexpr double pi = 3.141592653589793238462643383279502884L;

// TODO: Mod class

const int sz = 1e4 + 10;
int parent[sz];
int color[sz];
vector<int> edge[sz];
vector<int> order;

void dfs(int p, int cur) {
  parent[cur] = p;
  for (int i = 0; i < edge[cur].size(); ++i) {
    if (edge[cur][i] == p) {
      continue;
    }
    dfs(cur, edge[cur][i]);
  }
  order.push_back(cur);
}

int main() {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 2; i <= n; ++i) {
    int to;
    cin >> to;
    edge[i].push_back(to);
    edge[to].push_back(i);
  }

  vector<int> target(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> target[i];
  }

  dfs(0, 1);

  int ans = 0;
  for (int i = n - 1; i >= 0; --i) {
    int cur = order[i];
    if (target[cur] == color[parent[cur]]) {
      color[cur] = color[parent[cur]];
      continue;
    }
    // cout << "paint " << cur << " with " << target[cur] << endl;
    ++ans;
    color[cur] = target[cur];
  }
  cout << ans << endl;
}
