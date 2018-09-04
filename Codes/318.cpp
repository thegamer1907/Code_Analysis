#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001];
int bp (int x)
{
    int l=0,r=n;
    while (l<r-1)
    {
        int m=(l+r)/2;
        if (x>b[m])l=m;
        else r=m;
    }
    return r;
}
int main ()
{
    cin>>n;
    cin>>a[1];
    b[1]=a[1];
    for (int i=2;i<=n;++i)
    {
        cin>>a[i];
        b[i]=a[i]+b[i-1];
    }
    int m;
    cin>>m;
    for (int i=1;i<=m;++i)
    {
        int x;
        cin>>x;
        cout<<bp(x)<<endl;
    }


}
