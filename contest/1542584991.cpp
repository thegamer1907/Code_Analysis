#include <bits/stdc++.h>
#define int long long
#define pii pair <int,int>
#define piii pair < int,pair<int,int> >
#define f first
#define s second
#define pb push_back
#define N 100005
#define mod 1000000009
#define inf 1000000000000000000

using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    int a[13][13]={0};
    if(s==0)
    {
        a[12][1]=a[1][12]=a[11][12]=a[12][11]=1;
    }
    else if(s%5==0)
    {
        int x=s/5;
        a[x][x+1]=a[x+1][x]=a[x][x-1]=a[x-1][x]=1;
    }
    else if(s/5==0)
    {
        a[12][1]=a[1][12]=1;
    }
    else
    {
        int x=s/5;
        a[x][x+1]=a[x+1][x]=1;
    }
    if(s!=0 || m%5!=0)
    {
        if(m/5==0)
        {
            a[12][1]=a[1][12]=1;
        }
        else
        {
            int x=m/5;
            a[x][x+1]=a[x+1][x]=1;
        }
    }
    else
    {
        if(m==0)
        {
            a[12][1]=a[1][12]=a[11][12]=a[12][11]=1;
        }
        else
        {
            int x=m/5;
            a[x][x+1]=a[x+1][x]=a[x][x-1]=a[x-1][x]=1;
        }
    }
    if(m==0 && s==0)
    {
        if(h==12)
        {
            a[12][1]=a[1][12]=a[11][12]=a[12][11]=1;
        }
        else
        {
            a[h][h+1]=a[h+1][h]=a[h][h-1]=a[h-1][h]=1;
        }
    }
    else
    {
        if(h==12)
        {
            a[12][1]=a[1][12]=1;
        }
        else
        {
            a[h][h+1]=a[h+1][h]=1;
        }
    }
    int st=t1;
    while(st!=t2)
    {
        int y=st+1;
        if(y==13)
            y=1;
        if(a[st][y]==1)
        {
            break;
        }
        st=y;
    }
    if(st==t2)
    {
        cout<<"YES";
        return 0;
    }
    st=t1;
    while(st!=t2)
    {
        int y=st-1;
        if(y==0)
            y=12;
        if(a[st][y]==1)
        {
            break;
        }
        st=y;
    }
    if(st==t2)
    {
        cout<<"YES";
        return 0;
    }
    else
        cout<<"NO";
}
