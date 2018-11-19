#include<bits/stdc++.h>
#include <stdio.h>
#define ff(i,x,y)for(int i=x;i<y+1;i++)
#define fs(i,x,y)for(int i=x;i>y-1;i--)
#define all(x) x.begin(),x.end()
#define Ins(x) inserter(x,x.begin())
//set<int>::iterator it
using namespace std;
typedef long long ll;
int p1=1,p2=1;
long long d1,d2,d3,dt1,dt2;
int main()
{
    int a,b,c,t1,t2,now;
    scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
    t1=t1%12;
    t2=t2%12;
    a=a%12;
    d1=3600*a+60*b+c;
    d2=b*720+12*c;
    d3=c*720;
    dt1=3600*t1;
    dt2=3600*t2;
    if(dt1<dt2)
    {
        if(dt1<d1&&d1<dt2)
            p1=0;
        else
            p2=0;
        if(dt1<d2&&d2<dt2)
            p1=0;
        else
            p2=0;
        if(dt1<d3&&d3<dt2)
            p1=0;
        else
            p2=0;
    }
    else
    {
        if(dt1<d1||d1<dt2)
            p1=0;
        else
            p2=0;
        if(dt1<d2||d2<dt2)
            p1=0;
        else
            p2=0;
        if(dt1<d3||d3<dt2)
            p1=0;
        else
            p2=0;
    }
    if(p1||p2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
