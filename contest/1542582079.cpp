#include <bits/stdc++.h>
using namespace std;

double f[5];
int main ()
{
    int h,m,s,t1,t2;
    scanf ("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
    int h1=(h%12)*3600+m*60+s;
    f[1]=(double)h1/(double)(12*60*60)*360.0;
    f[2]=(double)(m*60+s)/(double)(60*60)*360.0;
    f[3]=(double)s/(double)60*360.0;
    double ff1=(double)t1/(double)12*360.0;
    double ff2=(double)t2/(double)12*360.0;
    for (int i=1;i<=3;i++) if(f[i]==0) f[i]=360.0;
    if(ff1==0) ff1=360.0;
    if(ff2==0) ff2=360.0;
    int flag=1;
    for (int i=1;i<=3;i++)
        if((f[i]-ff1)*(f[i]-ff2)<0) flag=0;
    if(flag)
    {
         printf ("YES\n");
         return 0;
    }
    flag=1;
    for (int i=1;i<=3;i++)
        if((f[i]-ff1)>0&&f[i]-ff2>0) flag=0;
        else if(f[i]-ff1<0&&f[i]-ff2<0) flag=0;
    if(flag) printf ("YES\n");
    else printf ("NO\n");
    return 0;
}
