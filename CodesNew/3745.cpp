#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{int i,Max=0,m2,n,m;
    cin>>n>>m;
    m2=m;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        Max=max(Max,a[i]);
    }
    for (i=1;i<=n;i++)
    {
        m2-=(Max-a[i]);
    }
    m2=max(m2,0);
    cout<<Max+(m2/n+min(1,m2%n))<<" "<<Max+m<<"\n";
}
