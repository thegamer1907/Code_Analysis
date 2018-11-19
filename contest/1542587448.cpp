#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2,u,k;
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    /*if(s==0) u1=0;
    else u1=1;
    if(m==0&&s==0) u2=0;
    else u2=1;*/
        m/=5;s/=5;
    if(h==12) h=0;
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    u=0;
    if(t1>t2) swap(t1,t2);
    for(int i=t1;i<t2;i++)
    {
        if(i!=h&&i!=m&&i!=s) continue;
        else
        {
            u=-1;
        }
    }
    if(u==0) cout<<"YES";
    else
    {
        u=0;
        for(int i=t2;i<12+t1;i++)
        {
            k=i;
            if(k>=12) k-=12;
            if(k!=h&&k!=m&&k!=s) continue;
            u=-1;
        }
        if(u==-1) cout<<"NO";
        else cout<<"YES";
    }
}
