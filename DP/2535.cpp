#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  int ans = 0, i = 0;
  while(i < n){
    int j;
    for(j = i + 1; j < n && a[j] > a[j-1]; j++);
    ans = max(ans, j - i);
    i = j;
  }
  cout << ans << endl;
  return 0;
}
