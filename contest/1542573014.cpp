#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,x,y;
    bool q[200];
    memset(q,false,sizeof(q));    int ans=0,ans1=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
    if(b==0&&c==0)
        q[a*10]=true;
    else
        q[a*10+1]=true;
    if(c==0)
    {
        if(q[b*2])
            ans1++;
        q[b*2]=true;
    }
    else
    {
        if(q[b*2+1])
            ans1++;
        q[b*2+1]=true;
    }
    if(q[c*2])
        ans1++;
    q[c*2]=true;
    if(x>y)
        swap(x,y);
    for(int i=x*10+1;i<y*10;i++)
    {
        if(q[i])
            ans++;
    }
    if(ans==0||ans1+ans==3)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
