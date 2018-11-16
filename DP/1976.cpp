#include<bits/stdc++.h>
#define maxn 1000006
using namespace std;
long n,m,l,a[maxn];
set<int>s;
main()
{
    cin>>n>>m;
    for(long i=1; i<=n; i++)cin>>a[i];
    for(long i=n; i>=1; i--)
    {
        s.insert(a[i]);
        a[i]=s.size();
    }
    while(m--)
    {
        cin>>l;
        cout<<a[l]<<endl;
    }
}
