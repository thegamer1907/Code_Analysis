#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 100005
ll n,m,k;
int i;
ll dem=0;
ll trang;
ll a[maxn];
void nhap()
{
//    freopen("bai3.inp","r",stdin);
//    freopen("bai3.out","w",stdout);
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++) cin>>a[i];
}
ll laytrang(ll s)
{
    ll res=s/k;
    if(s%k!=0) res++;
    return res;
}
void xuli()
{
    trang=0;
    i=0;dem=0;
    while (i<m)
    {
        i++;
        ll res=laytrang(a[i]-trang);
        while (i<m && laytrang(a[i+1]-trang)==res) i++;
        trang=i;
        dem++;
    }
    cout<<dem<<endl;
}
int main()
{
    nhap();
    xuli();
}