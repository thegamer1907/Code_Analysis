#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t, aux;
  scanf("%d %d", &n, &t);
  int p[n];
  for(int i=1;i<n;i++){
    scanf("%d", &p[i]);
  }
  for(int i=1;i<=t;i=i){
    if(i==t){
      printf("YES\n"); return 0;
    }
    i = i + p[i];
  }
  printf("NO\n");
}  