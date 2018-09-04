#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
const int maxn=200000+10;

int n,k,nn=0;
int a[maxn],b[maxn];
long long c[3][maxn],f[4][maxn];
long long kq;

int find(int x){
  int inf=1;int sup=nn;
  while(inf<=sup){
    int mid=(inf+sup)/2;
    if (b[mid]==x) return mid;
    if (b[mid]<x) inf=mid+1;
    else sup=mid-1;
  }
  return 0;
}

int main(){
  //freopen("input.txt","r",stdin);
  scanf("%d%d",&n,&k);
  for(int i=1;i<=n;i++) scanf("%d",&a[i]);
  for(int i=1;i<=n;i++)
    if (a[i]%k==0){
      nn++;b[nn]=a[i]/k;
    }
  sort(b+1,b+nn+1);int tn=1;
  for(int i=2;i<=nn;i++)
    if (b[tn]<b[i]){
      tn++;b[tn]=b[i];
    }
  nn=tn;
  //-------
  for(int j=0;j<=2;j++)
    for(int i=1;i<=nn;i++) c[j][i]=0;
  for(int i=1;i<=n;i++){
    if (a[i]%k==0){
      int x=find(a[i]/k);
      f[2][i]=c[1][x];
      f[3][i]=c[2][x];
    }
    int t=find(a[i]);
    if (t>0){
      c[1][t]=c[1][t]+1;
      c[2][t]=c[2][t]+f[2][i];
    }
  }
  kq=0;
  for(int i=1;i<=n;i++) kq=kq+f[3][i];
  cout<<kq;
}
