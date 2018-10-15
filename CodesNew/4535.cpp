#include <bits/stdc++.h>

using namespace std;

int main (){
  int n;
  cin >> n;
  static int a[555555];
  for(int i=0; i<n; i++) scanf("%d", a+i);
  sort(a, a+n);
  int mx=0, k, p=0;
  for(k=0; k<n/2; k++){
    while(p<n && a[p]<a[k]+a[k]) p++;
    mx=max(mx, p-k);
    if(mx>n-k-1) break;
  }
  cout << n-k << endl;
}

                               