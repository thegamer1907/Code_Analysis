#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<complex>
#include<queue>
#include<stack>
#include<cmath>
#include<set>
#include<vector>
using namespace std;
int tong[100],k;
inline bool check(int x,int y){
  int c1[5]={0,0,0,0,0},c2[5]={0,0,0,0,0};
  for(int i=0;i<k;i++)
    if(x&(1<<i)) c1[i]=1;
  for(int i=0;i<k;i++)
    if(y&(1<<i)) c2[i]=1;
  for(int i=0;i<k;i++)
    if(c1[i] && c2[i]) return 0;
  return 1;
}
int main(){
  int n;
  scanf("%d%d",&n,&k);
  for(int i=1;i<=n;i++){
    int x=0,p;
    for(int j=0;j<k;j++){
      scanf("%d",&p);
      x+=p*(1<<j);
    }
    tong[x]++;
  }
  if(tong[0]) printf("YES"),exit(0);
  for(int i=1;i<(1<<k);i++)
    if(tong[i]){
      for(int j=1;j<(1<<k);j++)
	if(check(i,j) && tong[j]) printf("YES"),exit(0);
    }
  printf("NO");
  return 0;
}
