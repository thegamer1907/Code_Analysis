#include <bits/stdc++.h>

using namespace std;

int n, m;

struct in{int x, y;} V[100005];

int CautMijl(int x)
{
    int st=1, dr=n;
    while (st<=dr)
    {
        int mijl=(st+dr)/2;
        if (V[mijl].x<=x && x<=V[mijl].y)
            return mijl;
        else if (x<V[mijl].x)
            dr=mijl-1;
        else
            st=mijl+1;
    }
    return 0;
}

int main()
{
    int x;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        V[i].x=V[i-1].y+1;
        V[i].y=V[i].x+x-1;
    }
    cin>>m;
    for (int i=1; i<=m; i++)
    {
        cin>>x;
        cout<<CautMijl(x)<<'\n';
    }
    return 0;
}
