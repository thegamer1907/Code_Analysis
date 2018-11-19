#include <bits/stdc++.h>

using namespace std;

int is_valid(vector<int> v, int k) {
  vector<int> cnt(k,0);
  int n = (int)v.size();
  for(auto e : v) {
    for(int i = 0;i < k;i++) {
      if((e>>i) & 1) {
        cnt[i]++;
        if(cnt[i] > n/2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

int main() {
  int n,k; cin>>n>>k;
  vector<int> v;
  map<int,int> cnt;
  for(int i = 0;i < n;i++) {
    int cc = 0;
    for(int j = 0;j < k;j++) {
      int t; scanf("%d",&t);
      cc = cc * 2 + t;
    }
    cnt[cc]++;
    if(cnt[cc] <= 2) {
      v.push_back(cc);
    }
  }
  if(cnt[0] >= 1) {
    cout << "YES" << endl;
    return 0;
  }
  n = (int)v.size();
  for(int a = 0;a < n;a++) {
    for(int b = a + 1;b < n;b++) {
      if(is_valid({v[a], v[b]}, k)) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  for(int a = 0;a < n;a++) {
    for(int b = a + 1;b < n;b++) {
      for(int c = b + 1;c < n;c++) {
        if(is_valid({v[a], v[b], v[c]}, k)) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  for(int a = 0;a < n;a++) {
    for(int b = a + 1;b < n;b++) {
      for(int c = b + 1;c < n;c++) {
        for(int d = c + 1;d < n;d++) {
          if(is_valid({v[a], v[b], v[c], v[d]}, k)) {
            cout << "YES" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "NO" << endl;
}
