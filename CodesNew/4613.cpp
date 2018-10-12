#include <bits/stdc++.h>
using namespace std;
const int N=5e5;
int ar[N+1];

int main() {
  ios::sync_with_stdio(0);

  int n; cin >> n;
  for(int i=0; i<n; i++) cin >> ar[i];

  sort(ar, ar+n);

  int ls=0; int idx=n/2;
  for(int i=0; i<n/2; i++) {
    idx = lower_bound(ar+idx, ar+n, ar[i]*2)-ar;
    if(idx<n) {
      ls++; idx++;
    }
  }
  cout<< n-ls << endl;
  return 0;
}
