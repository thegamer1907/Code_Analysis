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
    int a,b,ans=0;
    cin>>a>>b;
    while(a<=b)
    {
        ans++;
        a*=3;
        b*=2;
    }
    cout<<ans<<endl;
    return 0;
}
