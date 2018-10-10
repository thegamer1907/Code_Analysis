#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000 + 10;
const int INF = INT_MAX;

int prefix[MAXN];

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    prefix[i] = prefix[i - 1] + x;
  }

  int m;
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;

    int l = 0, r = n + 1;
    while (r - l > 1) {
      int mid = (l + r) / 2;
      if (prefix[mid] >= x) r = mid;
      else l = mid;
    }                         
    cout << r << endl;
  }

  return 0;
}