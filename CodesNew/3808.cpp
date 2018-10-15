#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, mx = 0, data;
  long long total = 0;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> data;
    mx = max(mx, data);
    total += data;
  }

  long long ans = ceil(1.0 * total / (n-1));
  cout << max(ans, (long long)mx) << "\n";
  return 0;
}
