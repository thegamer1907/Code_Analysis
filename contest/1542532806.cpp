#include "bits/stdc++.h"
using namespace std;
const int N = 1e5+5;
int n, k;
long long dp[22][N];
int opt[22][N];
int a[N];
/*
  dp[i][j]=Minimum cost to divide first j into i blocks
  opt[i][j]=Minimum K such that dp[i][j] = dp[i-1][k]+cost(k+1,j)

*/
int sv[N];
long long curCost=0;
int curL=1,curR=0;
long long cost(int l, int r){
  while(curR<r)curCost += sv[a[++curR]]++;
  while(curL>l)curCost += sv[a[--curL]]++;
  while(curR>r)curCost -= --sv[a[curR--]];
  while(curL<l)curCost -= --sv[a[curL++]];
  return curCost;
}
void calc(int idx, int l, int r, int optL, int optR){
  ///Current sv is -freq of prefix l-1
  if(l>r)return;
  int md = (l+r)>>1;
  
  for(int i = optL; i <= min(optR,md-1); i++){

    if(dp[idx][md] > dp[idx-1][i] + cost(i+1,md)){
      dp[idx][md] = dp[idx-1][i] + curCost;
      opt[idx][md] = i;
    }

  }

  calc(idx,l,md-1,optL,opt[idx][md]);
  calc(idx,md+1,r,opt[idx][md],optR);

}

int main(){

  scanf("%d%d", &n, &k);

  memset(dp, 63, sizeof dp);
  dp[0][0]=0;

  for(int i = 1; i<= n; i++)
    scanf("%d",a+i);

  for(int i = 1; i <= k; i++)
    calc(i,1,n,0,n);

  cout << dp[k][n] << '\n';
}