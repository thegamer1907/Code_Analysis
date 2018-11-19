#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    ll h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    double a,b,c;
    if((60*s)+m>0)
    {
        if(h==12)
            a=0.5;
        else
            a=h+0.5;
    }
    else
        a=h;
    if(m%5==0&&m!=0)
        b=m/5;
    else
    {
        b=(m/5)+0.5;
    }
    if(s%5==0&&s!=0)
        c=s/5;
    else
    {
        c=(s/5)+0.5;
    }
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    double now=t1;
    ll f1=1,f2=1;
    while(now!=t2)
    {
        if(now==a||now==b||now==c)
        {
            f1=0;
            break;
        }
        if(now==11.5)
            now=0;
        else
            now+=0.5;
    }
    now=t2;
    while(now!=t1)
    {
        if(now==a||now==b||now==c)
        {
            f2=0;
            break;
        }
        if(now==11.5)
            now=0;
        else
            now+=0.5;
    }
    if(f1==0&&f2==0)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;
}
