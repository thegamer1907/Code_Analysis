#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<queue>
#include<algorithm>
#define ll long long
#define re register
using namespace std;
inline int gi(){
  int sum=0,f=1;char ch=getchar();
  while(ch>'9' || ch<'0'){if(ch=='-')f=-1;ch=getchar();}
  while(ch>='0' && ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
  return f*sum;
}
inline ll gl(){
  ll sum=0,f=1;char ch=getchar();
  while(ch>'9' || ch<'0'){if(ch=='-')f=-1;ch=getchar();}
  while(ch>='0' && ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
  return f*sum;
}
int n,m,a[1010],Min=2e9,Max=0;
bool check(int mid){
  int sum=0;
  for(re int i=1;i<=n;i++){
    if(a[i]>mid)return false;
    sum+=mid-a[i];
  }
  return sum>=m;
}
int main(){
  n=gi();m=gi();
  for(re int i=1;i<=n;i++){
    a[i]=gi();Min=min(Min,a[i]);Max=max(Max,a[i]);
  }
  int l=Min,r=Max+m,ans;
  while(l<=r){
    int mid=(l+r)>>1;
    if(check(mid)){ans=mid;r=mid-1;}
    else l=mid+1;
  }
  printf("%d %d\n",ans,Max+m);
  return 0;
}