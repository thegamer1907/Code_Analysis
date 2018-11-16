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
int a[1001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;
    cin>>n>>h;
    int ans=0;
    f(i,0,n)
    {
        cin>>a[i];
        ans++;
        if(a[i]>h)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}