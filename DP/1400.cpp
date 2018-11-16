#include<bits/stdc++.h>
using namespace std;

#define debug printf

int n, ans = 0, temp = 0;
int pd[2][102];
int main(){
  scanf("%d", &n);
  vector<int> a(n+1);

  for(int i = 1; i <= n; i++){
    scanf("%d", &a[i]);
    pd[0][i]=pd[0][i-1]+a[i];
    pd[1][i]=pd[1][i-1];
    if(!a[i])
      pd[1][i]++;
  }
  for(int i = 1; i <= n; i++){
    for(int j = i; j <= n; j++){
      int ant=pd[0][i-1];
      int flip=pd[1][j]-pd[1][i-1];
      int dps=pd[0][n]-pd[0][j];
      int aux=ant+flip+dps;

      //debug("%d %d\t%d %d %d %d\n",i, j,ant,flip,dps,aux);
      ans=max(aux,ans);
    }
  }
  printf("%d\n",ans);

  return 0;
}
