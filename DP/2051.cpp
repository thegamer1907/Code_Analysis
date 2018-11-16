#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <stack>
#include <queue>
#include <list>
#include <bitset>
using namespace std ;
typedef long long ll;
const int N=1e6;
int n,m ,a[100001],dp[1000001]={},f[100001];
int main (){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif
  //freopen("outputn.txt","w",stdout);
scanf ("%d%d",&n, &m);
for (int i=1; i<=n; i++){
  scanf ("%d",&a[i]);
}
for (int i=n; i>0; i--){
  dp[i]=dp[i+1]+(f[a[i]]==0);
  f[a[i]]++;
}
for (int k,i=0; i<m; i++){
  scanf ("%d",&k);
  printf("%d\n",dp[k]);
}
return 0;
}