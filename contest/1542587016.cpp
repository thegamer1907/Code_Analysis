#include <bits/stdc++.h>
using namespace std;
int h,m,s,tt1,tt2;
double t1,t2;
double c[5];
bool judge()
{
    for (int i=1;i<=2;i++)
        if(t1>c[i]&&t1<c[i+1]&&t2>c[i]&&t2<c[i+1])
            return true;
    if(t1<c[1]&&t2<c[1])    return true;
    if(t1>c[3]&&t2>c[3])    return true;
    if(t1>c[3]&&t2<c[1])    return true;
    if(t1<c[1]&&t2>c[3])    return true;
    return false;
}
int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&tt1,&tt2);
    h%=12;
    t1=tt1*5.0,t2=tt2*5.0;
    c[1]=(h+m*1.0/60+s*1.0/3600)*5;
    c[2]=m+s*1.0/60;
    c[3]=s;
    sort(c+1,c+4);
    //cout<<c[1]<<" "<<c[2]<<" "<<c[3]<<" "<<t1<<" "<<t2<<endl;
    if(judge())
        puts("YES");
    else
        puts("NO");
}
