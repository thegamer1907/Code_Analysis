#include    <iostream>
#include    <cstdio>
#include    <cstdlib>
#include    <algorithm>
#include    <vector>
#include    <cstring>
#include    <queue>
#include    <complex>
#include    <stack>
#define LL long long int
#define dob double
#define FILE ""
using namespace std;

const int N = 100010;
char c[11],f[11];

inline int gi(){
  int x=0,res=1;char ch=getchar();
  while(ch>'9'||ch<'0'){if(ch=='-')res*=-1;ch=getchar();}
  while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
  return x*res;
}

int main()
{
  /*freopen(FILE".in","r",stdin);
    freopen(FILE".out","w",stdout);*/
  scanf("%s",c+1);int n=gi(),f1=0,f2=0;
  for(int i=1;i<=n;++i){
    scanf("%s",f+1);
    if(f[1]==c[2])f2=1;
    if(f[2]==c[1])f1=1;
    if(f[1]==c[1] && f[2]==c[2])f1=f2=1;
  }
  if(f1 && f2)printf("YES");
  else printf("NO");
  
  
  /*fclose(stdin);
    fclose(stdout);*/
  return 0;
}
