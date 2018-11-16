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
    string s;
    cin>>s;
    f(i,0,n-1)
    {
        if(s[i]==s[i+1])
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}