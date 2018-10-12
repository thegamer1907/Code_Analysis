#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false); cin.tie(NULL);
  int n, k; cin >> n >> k;
  vector<int> a(n+1);
  vector<int> ps(n+1);
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    ps[i] = ps[i-1] + (a[i] == 0);
  }
  int len = 0, idx = 1;
  for(int i = 1; i <= n; i++){
    int j = upper_bound(ps.begin() + i, ps.end(), ps[i-1] + k) - ps.begin();
    if(j - i > len){
      idx = i;
      len = j - i;
    }
  }
  for(int i = idx, cnt = 0; i <= n && cnt < k; i++){
    if(a[i] == 0){
      a[i] = 1;
      ++cnt;
    }
  }
  cout << len << endl;
  for(int i = 1; i <= n; i++) cout << a[i] << " ";
  cout << endl;
  return 0;
}
