#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
#define MP make_pair
#define PB push_back
#define ll long long
#define int long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define mod 1000000007
int a[51];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,ans=0;
    cin>>n>>k;
    f(i,0,n)
    cin>>a[i];
    f(i,0,n)
    {
        if(a[i]>0&&a[i]>=a[k-1])
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
