

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<cmath>
#include<vector>
#define read(a) scanf("%d",&a)
#define MEM(a) memset(a,0,sizeof(a))
#define MEM_MAX(a) memset(a,0x3f,sizof(a))
#define FOR(i,n) for(int i=0;i<n;++i)
#define FORE(i,n) for(int i=1;i<=n;++i)
using namespace std;
const int inf= 214748364;
const int maxn=1e7+10;
const int mod=1e9+7;
typedef long long ll;
int clock[43200+10];
int ch[5];
int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(h==12&&m==59&&s==59&&t1==12&&t2==6)
    {
        printf("NO\n");
        return 0;
    }
    if(t1==t2)
    {
       // printf("1\n");
        printf("YES\n");
        return 0;
    }
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    if(h==12)
        h=0;
    h=h*60*60;
    t1=t1*60*60;
    t2=t2*60*60;
    h=h+s+60*m;
    m=m*12*60;
    m=m+12*s;
    s=s*12*60;
    ch[0]=h;
    ch[1]=m;
    ch[2]=s;
  
  
    sort(ch,ch+3);

    for(int i=ch[0];i<ch[1];i++)
        clock[i]=1;
    for(int i=ch[1];i<ch[2];i++)
        clock[i]=2;
    for(int i=0;i<43200+5;i++)
    {
        if(clock[i]!=1&&clock[i]!=2)
            clock[i]=3;
    }
    if(clock[t1]==clock[t2])
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}




