#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#define  ll long long
using namespace std;

int z[3600*30*12+10];

int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);

    h=h%12;
    h=3600*h*30+m*60*30+s*30;
    m=m*6*3600+s*6*60;
    s=s*6*3600;
    z[h]=z[m]=z[s]=1;
    int ok=0;
    t1=t1%12;
    t1=t1*30*3600;
    t2=t2%12;
    t2=t2*30*3600;
    for(int i=t1;;i++)
    {
        i=i%(12*30*3600);
        if(i==t2)
        {
            ok=1;
            break;
        }
        if(z[i]==1)
            break;
    }
    for(int i=t1;;i--)
    {
        if(i==-1)
        {
            i=12*30*3600-1;
        }
        if(i==t2)
        {
            ok=1;
            break;
        }
        if(z[i]==1)
            break;
    }
    if(ok==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
