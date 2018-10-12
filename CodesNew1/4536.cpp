#include <bits/stdc++.h>

using namespace std;

int main (){
  int n;
  cin >> n;
  static int a[555555];
  for(int i=0; i<n; i++) scanf("%d", a+i);
  sort(a, a+n);
  int mx=0, k;
  for(k=0; k<n/2; k++){
    int j=lower_bound(a, a+n, a[k]*2)-a;
    mx=max(mx, j-k);
    if(mx>n-k-1) break;
  }
  cout << n-k << endl;
}

           