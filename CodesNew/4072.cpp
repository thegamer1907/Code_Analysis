// In the name of God
// I have not failed. I have just found 10000 ways that will not work. << Thomas Edison >>
// A.H.Ghaznavi
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef const int ci;
typedef const ll cll;
ci maxn=2e5+10;
ll n,q,a[maxn],k,sum[maxn],now,l,r,mid,m[maxn],w;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    now=1;
    cin>>n>>q;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        m[i]=a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for (int i2=0;i2<q;i2++)
    {
        cin>>k;
        if (k<a[now])
        {
            a[now]-=k;
            cout<<n-now+1<<endl;
            continue;
        }
        w=m[now]-a[now];
        r=n+1;
        l=now;
        while (r-l>1)
        {
            mid=(r+l)/2;
            if (sum[mid]-sum[now-1]-w>k)
                r=mid;
            else
                l=mid;
        }
        a[now]=m[now];
        if (l==n)
        {
            cout<<n<<endl;
            now=1;
            continue;
        }
        cout<<n-l<<endl;
        a[l+1]-=(k-sum[l]+sum[now-1]+w);
        now=l+1;
    }
    return 0;
}
