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
int cf[11];

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
  int h=gi(),m=gi(),s=gi(),t1=gi(),t2=gi();
  if(t1>t2)swap(t1,t2);
  cf[1]=h%12;cf[2]=m/5;cf[3]=s/5;
  int flag=0;
  for(int i=1;i<=3;++i)cf[i+3]=cf[i]+12;
  sort(cf+1,cf+6+1);
  for(int i=1;i<=5;++i)
    if(t1>cf[i] && t2<=cf[i+1])
      flag=1;
  if(t2<=cf[1])flag=1;
  swap(t1,t2);t2+=12;
  for(int i=1;i<=5;++i)
    if(t1>cf[i] && t2<=cf[i+1])
      flag=1;
  if(t1>cf[6])flag=1;
  printf("%s",flag?"YES":"NO");
  
  
  /*fclose(stdin);
    fclose(stdout);*/
  return 0;
}
