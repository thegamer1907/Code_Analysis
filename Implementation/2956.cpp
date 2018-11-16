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
    f(i,0,n)
    {
        string s;
        cin>>s;
        if(s[0]=='T')
        ans+=4;
        else if(s[0]=='C')
        ans+=6;
        else if(s[0]=='O')
        ans+=8;
        else if(s[0]=='D')
        ans+=12;
        else
        ans+=20;
    }
    cout<<ans<<endl;
    return 0;
}