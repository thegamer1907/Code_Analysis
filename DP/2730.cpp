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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    f(i,0,5)
    {
        ans+=n/arr[i];
        n-=(n/arr[i])*arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
