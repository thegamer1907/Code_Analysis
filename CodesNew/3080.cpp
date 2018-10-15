#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N=1e6+5;

int n, k, ans=0;
int f[2*N];
string s;

int32_t main()
{
    IOS;
    cin>>k>>s;
    n=s.size();
    int cur=0;
    f[0]=1;
    for(int i=0;i<n;i++)
    {
        cur+=(s[i]=='1');
        f[cur]++;
    }
    for(int i=0;i<n;i++)
    {
        if(k==0)
            ans+=f[i]*(f[i]-1)/2;
        else
            ans+=f[i]*(f[i+k]);
    }
    cout<<ans;
    return 0;
} 