#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("avx")
#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int i, j, n, k, a[N][4], mask, cnt[4];
set<int> S;
vector<int> v;

int main() {
  scanf("%d %d", &n, &k);
  for(i = 1; i <= n; ++i) {
    int curr = 0;
    for(j = 0; j < k; ++j) 
      scanf("%d", &a[i][j]), curr *= 2, curr += a[i][j];
    if(!curr) return 0 * puts("YES");
    S.insert(curr);
  }

  for(auto it : S) v.push_back(it);

  for(mask = 1; mask < (int)(1 << v.size()); ++mask) {
    memset(cnt, 0, sizeof(cnt));
    int aux = 0, nr = 0;
    for(i = 0; i < (int)v.size(); ++i) 
      if(mask & (1 << i)) {
        ++nr;
        for(j = 0; j < k; ++j)
          if(v[i] & (1 << j)) ++cnt[j];
      }

    for(i = 0; i < k; ++i) aux = max(aux, cnt[i]);
    if(aux + aux <= nr) return 0 * puts("YES");
  }

  puts("NO");

  return 0;
}
		 		 	   	 				 		   		 	  	