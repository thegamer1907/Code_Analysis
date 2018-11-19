#include<queue>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#define inf 1<<30
#define ll long long
#define db double
#define c233 cout<<"233"<<endl
#define mem(s) memset(s,0,sizeof(s))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
const int N=55;
using namespace std;

char pas[3],s[N][3];
int n;

void fre(){
  freopen("in","r",stdin);
  freopen("out","w",stdout);
}

inline int gi(){
  int x=0,res=1;char ch=getchar();
  while(ch>'9'||ch<'0'){if(ch=='-')res*=-1;ch=getchar();}
  while(ch<='9'&&ch>='0')x=(x<<1)+(x<<3)+ch-48,ch=getchar();
  return x*res;
}

void init(){
  scanf("%s",pas+1);
  n=gi();
  for(int i=1;i<=n;i++)
    scanf("%s",s[i]+1);
}

void work(){
  for(int i=1;i<=n;i++)
    if(pas[1]==s[i][1]&&pas[2]==s[i][2]){
      printf("Yes\n");
      return;
    }
  int hav1=0,hav2=0;
  for(int i=1;i<=n;i++)
    if(s[i][2]==pas[1]){hav1=1;break;}
  for(int i=1;i<=n;i++)
    if(s[i][1]==pas[2]){hav2=1;break;}
  if(hav1==1&&hav2==1)printf("Yes\n");
  else printf("No\n");
}

int main(){
  //fre();
  init();
  work();
  return 0;
}
