#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12) h=0;
    h=(h*60*60+m*60+s);
    m=m*720+s*12;
    s*=720;
//    cout<<h<<' '<<m<<' '<<s<<endl;
    t1=t1*3600;
    t2=t2*3600;
//    cout<<t1<<' '<<t2<<endl;
    int vis[70]={0};
    vis[0]=h;
    vis[1]=m;
    vis[2]=s;
    if(t2<t1)
        swap(t1,t2);
    int zz=0;
    for(int i=0;i<3;i++)
    {
        if(vis[i]==t1||vis[i]==t2)
            zz++;
    }
    int ff=0;
    for(int j=0;j<3;j++)
    {
        if(vis[j]>=t1&&vis[j]<=t2)
            ff++;
    }
    if(ff==3||ff==0||ff-zz==0)
    {
        puts("YES");
    }
    else
        puts("NO");


}
