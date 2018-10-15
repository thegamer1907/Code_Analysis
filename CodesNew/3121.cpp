#include <bits/stdc++.h>

using namespace std;

int a[300001], ds[300001], n, k;

void nhap()
{
    cin>>n>>k;
    for(int i=1; i<=n; ++i)
    {
        cin>>ds[i];
        a[i]=a[i-1]+ds[i];
    }
}

int kt( int x )
{
    for(int i=x; i<=n; ++i)
    {
        if(a[i]-a[i-x]+k>=x)
            return i;
    }
    return 0;
}

void xl()
{
    int d=0, c=n+1, g, t, kq=0, vt=0;
    while(d<=c)
    {
        g=(d+c)/2;
        t=kt(g);
        if( t )
        {
            kq=g;
            vt=t;
            if(d!=g) d=g;
            else break;
        }
        else
        {
            if(c!=g) c=g;
            else break;
        }
    }
    cout<<kq<<'\n';
    for(int i=1; i<=n; ++i)
    {
        if(i<=vt && vt-i<kq)
            cout<<1<<' ';
        else cout<<ds[i]<<' ';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhap();
    xl();
}
