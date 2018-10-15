#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define P 52081
#define MP make_pair
#define sz(v) (int)v.size()
#define inf 300000
using namespace std;

int main()  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,q,a[200004],pre[400003]={0},ans,x,i,l,r,mid;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }
    ll y=0,z=0;
    while(q--)
    {
        cin>>x;
        x+=z;
        l=y;
        r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(x>=pre[mid]-pre[y]) ans=mid,l=mid+1,z=x-pre[mid]+pre[y];
            else r=mid-1;
        }
        if(ans==n) ans=0,z=0;
        y=ans;
        cout<<n-ans<<"\n";
    }
    
}