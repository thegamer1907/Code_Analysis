#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//int a[100005][5];
//int main()
//{
//    int n,k;
//    scanf("%d%d",&n,&k);
//    for(int i=1;i<=n;i++)
//        for(int j=1;j<=k;j++)
//            scanf("%d%d",&a[i][j]);
//
//}
int main()
{
    ll h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    ll z1=(h%12)*3600+m*60+s,z2=m*720+s*12,z3=s*720;
    if(t1>t2)swap(t1,t2);
    bool flag=0,fflag=0,f3=0;
    t1*=3600,t2*=3600;
    if(z1>t1&&z1<t2)flag=true;
    else
    {
        if(z1==t1||z1==t2)f3=true ;
        else fflag=true;
    }

    if(z2>t1&&z2<t2)flag=true;
    else
    {
        if(z2==t1||z2==t2)f3=true ;
        else fflag=true;
    }

    if(z3>t1&&z3<t2)flag++;
    else
    {
        if(z3==t1||z3==t2)f3=true;
        else fflag=true;
    }
    puts((!flag||!fflag)?"YES":"NO");
}
