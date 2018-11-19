#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
struct dushu
{
    double number;
    bool shibushiren;
}du[5];
bool cmp(dushu a,dushu b)
{
    return a.number<b.number;
}
int main()
{
    int h,m,s,t1,t2;
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
    {
        if(h>12) h-=12;
        du[0].number = h*30+m*0.5+s*1.0/120.0;
        du[0].shibushiren = false;
        du[1].number = m*6+s*0.1;
        du[1].shibushiren = false;
        du[2].number = s*6;
        du[2].shibushiren = false;
        du[3].number = t1*30;
        du[3].shibushiren = true;
        du[4].number = t2*30;
        du[4].shibushiren = true;
        sort(du,du+5,cmp);
        bool panduan = false;
        if(du[0].shibushiren&&du[4].shibushiren)
        {
            printf("YES\n");
            panduan = true;
        }
        for (int i = 0;i<4;i++)
        {
            if(du[i].shibushiren&&du[i+1].shibushiren)
            {
                printf("YES\n");
                panduan = true;
            }
        }
        if (!panduan)
            printf("NO\n");
    }
}
