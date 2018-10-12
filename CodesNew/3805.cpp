#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n,l,r=100000000000000000,s,max=0;
  cin >> n;
  vector <int> v(n);
  for (int i=0;i<n;i++){
    cin >> v[i];
    if(v[i]>max)
      max=v[i];
  }
  l=max;
  while (r-l>1){
    int d=(r+l)/2;
    s=0;
    for (int i=0;i<n;i++)
      s+=(d-v[i]);
    if(s>=d)
      r=d;
    else
      l=d;  
  }
  s=0;
  for (int i=0;i<n;i++)
    s+=(l-v[i]);
  if(s>=l)
    cout << l;
  else
    cout << r;
  return 0;
}