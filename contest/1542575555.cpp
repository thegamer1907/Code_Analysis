/* Bismillah Hir Rahmanir Rahim */

#include <bits/stdc++.h>

using namespace std;

int main() {
  char b[10];
  int i=0;

  cin>>b;
  int n;
  scanf("%d", &n);
  int mx = 0,nx=0,cx=0;
  char a[10];
  for (int i = 0; i < n; i++) {
    int j=0;
    cin>>a;
    if(a[0]==b[1])
    mx++;
    if(a[1]==b[0])
    nx++;
    if(a[0]==b[0] && a[1]==b[1])
    cx+=2;

  }
   if(cx>0)
    printf("YES");
  else if(mx>0 && nx>0)
  printf("YES");
  else
   printf("NO");
  return 0;
}


