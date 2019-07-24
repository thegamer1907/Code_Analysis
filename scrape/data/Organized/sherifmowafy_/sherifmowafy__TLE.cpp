#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

int main() {
  ll n, m, k, tmp;

  ll p[100010];

  cin >> n >> m >> k;

  for(int i = 0; i < m; i++) {
    cin >> tmp;
    p[i] = tmp - 1;
  }

  int glb_idx = 0;

  int ops = 0;

  int removed_count = 0;

  int curr_page;

  while(glb_idx < m) {
    int local_removed_count = 0;

    curr_page = (p[glb_idx] - removed_count) / k;

    while(glb_idx < m) {
      while((p[glb_idx] - removed_count) / k == curr_page) {
        local_removed_count++;
        glb_idx++;
      }

      if (local_removed_count == 0) break;

      removed_count += local_removed_count;

      local_removed_count = 0;

      ops++;
    }
  }

  cout << ops << endl;
}