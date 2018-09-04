#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

string s;
long long a[5],b[5],c[5],d[5],i,n,voy,aum,m;

bool Posible(long long k)
{
    m=n;
    for (i=0;i<3;i++)
    {
        d[i]=a[i]*k;
        d[i]-=b[i];
        if (d[i]>0) m-=(d[i]*c[i]);
    }
    return (m>=0);
}

int main()
{
    cin>>s;
    for (i=0;i<s.size();i++)
    {
        if (s[i]=='B') a[0]++;
        else if (s[i]=='S') a[1]++;
        else a[2]++;
    }
    cin>>b[0]>>b[1]>>b[2];
    cin>>c[0]>>c[1]>>c[2];
    cin>>n;
    voy=0;
    aum=1000000000000;
    while (aum)
    {
        if (Posible(voy+aum)) voy+=aum;
        else aum/=2;
    }
    cout<<voy<<endl;
}
