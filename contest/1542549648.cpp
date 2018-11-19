#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <climits>
#include <string>
#include <map>
#include <set>
using namespace std;
typedef long long LL;
#define mp(x,y) make_pair((x),(y))

set< int > S;

vector<int> v;
int n;

int f[5];

int nrbits(int x) {
  int ans = 0;
  while (x) {
    ans += (x & 1);
    x >>= 1;
  }
  return ans;
}

int main() {
  int N, K;
  scanf("%d%d", &N, &K);
  for (int i = 0; i < N; ++i) {
    int msk = 0;
    for (int j = 0; j < K; ++j) {
      int a;
      scanf("%d", &a);
      msk = (msk << 1) | a;
    }
    S.insert(msk);
  }
  for (const auto &it : S)
    v.push_back(it);
  n = v.size();
  for (int subset = 1; subset < (1 << n); ++subset) {
    int sn = nrbits(subset);
    memset(f, 0, sizeof f);
    for (int i = 0; i < n; ++i) {
      if ((subset & (1 << i)) == 0)
        continue;
      int msk = v[i];
      for (int j = 0; j < K; ++j) {
        f[j] += (msk & 1);
        msk >>= 1;
      }
    }
    bool flag = true;
    for (int j = 0; j < K; ++j)
    if (f[j] * 2 > sn)
      flag = false;
    if (flag) {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}

	   		 		    						 	  	 	 		 	