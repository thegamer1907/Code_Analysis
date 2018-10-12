#include <bits/stdc++.h>
#define forinc(i,a,b) for(int i=a;i<=b;++i)
using namespace std;
const int N=100010;
int n,m,mi,kq,ma;
int a[N],dd[N];
int main()
{
    cin>>n>>m;mi=INT_MAX;
    forinc(i,1,n) cin>>a[i],dd[a[i]]++,mi=min(mi,a[i]),kq=max(kq,a[i]);
    ma=kq+m;
    while (m>0)
    {
        m-=dd[mi];
        dd[mi+1]+=dd[mi];mi++;
        kq=max(kq,mi);
    }
    cout<<kq<<" "<<ma;
}