#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 100005
int i,n,m,k;
ll dem=0;
ll trang;
ll a[maxn],j;
void nhap()
{
//    freopen("bai3.inp","r",stdin);
//    freopen("bai3.out","w",stdout);
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++) cin>>a[i];
    sort(a+1,a+m+1);
}
int chat(ll s)
{
    int kq=-1;
    int l=1;
    int r=m;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]>s) r=mid-1;
        else if(a[mid]<=s)
        {
            l=mid+1;
            kq=mid;
        }
    }
    return kq;
}
void xuli()
{
    trang=0; j=0; dem=0;
    while(trang<=n)
    {
        trang+=k;
        while(1)
        {
            int tmp=chat(trang);
          //  cout<<trang<<' '<<tmp<<endl;
            if(tmp!=-1 && tmp!=j)
            {
                ll res=tmp-j; j=tmp;
                dem++; trang+=res;
            }
            else if(tmp==j)
            {
                if(j==m) break;
                ll res=(a[j+1]-trang-1)/k;
                trang=res*k+trang;
                break;
            }
            else if(tmp==-1) break;
        }
    }
    printf("%lld",dem);
}
int main()
{
    nhap();
    xuli();
}