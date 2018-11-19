#pragma GCC optimize "O3"

#define F first
#define S second

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int n, k;
set<int> st;

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; ++i) {
    int v = 0; 
    for(int j = 0; j < k; ++j) {
      int x; scanf("%d", &x);
      v = ((v<<1) | x);
    }
    st.insert(v);
  }
  if(st.count(0)) {
    puts("YES");
    return 0;
  }
  for(int i = 1; i < (1<<k); ++i) {
    for(int j = 1; j < (1<<k); ++j)
      if((i & j) == 0) {
        if(st.count(i) && st.count(j)) {
          puts("YES");
          return 0;
        }
      }
  }
  puts("NO");
}
