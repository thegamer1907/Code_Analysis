#include<bits/stdc++.h>
#include <stdio.h>
#define ff(i,x,y)for(int i=x;i<y+1;i++)
#define fs(i,x,y)for(int i=x;i>y-1;i--)
#define all(x) x.begin(),x.end()
#define Ins(x) inserter(x,x.begin())
//set<int>::iterator it
using namespace std;
typedef long long ll;
char g[10],now[10];
int pre1,pre2,la2,la1,pan;
int main()
{
    scanf("%s",g);
    int n;
    scanf("%d",&n);
    ff(i,1,n)
    {
        scanf("%s",now);
        if(now[0]==g[0])
            pre1=1;
        if(now[0]==g[1])
            la1=1;
        if(now[1]==g[0])
            pre2=1;
        if(now[1]==g[1])
            la2=1;
        if(now[0]==g[0]&&now[1]==g[1])
        pan=1;
    }
    if((pre2&&la1)||(pan))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
