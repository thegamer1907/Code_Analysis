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
int n,k,f[N],bin[N],A[N],tot;

inline int gi(){
  int x=0,res=1;char ch=getchar();
  while(ch>'9'||ch<'0'){if(ch=='-')res*=-1;ch=getchar();}
  while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
  return x*res;
}

inline bool check(int x,int y){
  return (x&y)==0;
}

int main()
{
  /*freopen(FILE".in","r",stdin);
    freopen(FILE".out","w",stdout);*/
  n=gi();k=gi();
  for(int i=1;i<=n;++i){
    for(int i=1;i<=k;++i)f[i]=gi();
    int res=0;
    for(int i=1;i<=4;++i)res=res*2+f[i];
    bin[res]++;
  }
  if(bin[0]){printf("YES");return 0;}
  for(int i=0;i<15;++i)
    if(bin[i])A[++tot]=i,bin[i]--;
  for(int i=0;i<15;++i)
    if(bin[i])A[++tot]=i,bin[i]--;
  for(int i=1;i<=tot;++i)
    for(int j=1;j<i;++j)
      if(check(A[i],A[j])){
        printf("YES");
        return 0;
      }
  printf("NO");
  
  
  /*fclose(stdin);
    fclose(stdout);*/
  return 0;
}
