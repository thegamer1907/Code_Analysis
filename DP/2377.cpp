#include<bits/stdc++.h>
using namespace std;

int n, k, s, p, a[150001];

int main(){

  scanf("%d %d", &n, &k);
  for(int i=1; i<=n; i++)
    scanf("%d", &a[i]),
    a[i] += a[i-1];

  s = a[k];
  p = 1;

  for(int i=k+1; i<=n; i++)
    if(s > a[i] - a[i-k])
      s = a[i] - a[i-k],
      p = i-k+1;

  printf("%d", p);

  return 0;
}
