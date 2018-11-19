#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2,t,i;
    int a,b,c,d,e,cnt;
    int x[4];
    bool f[4];
    cin>>h>>m>>s>>t1>>t2;
    t=h*3600+m*60+s;
    a=t%43200;
    b=t*12%43200;
    c=t*720%43200;
    d=t1*3600%43200;
    e=t2*3600%43200;
    if (d>e) swap(d,e);
    memset(f,false,sizeof(f));
    if (d<=a && a<=e) x[1]=1;
    else
    {
        if (a==d || a==e) x[1]=0;
        else x[1]=2;
    }
    if (d<=b && b<=e) x[2]=1;
    else
    {
        if (b==d || b==e) x[2]=0;
        else x[2]=2;
    }
    if (d<=c && c<=e) x[3]=1;
    else
    {
        if (c==d || c==e) x[3]=0;
        else x[3]=2;
    }
    for(i=1;i<=3;i++)
        f[x[i]]=true;
    cnt=0;
    for(i=1;i<=2;i++)
        if (f[i]) cnt++;
    if (cnt<=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
