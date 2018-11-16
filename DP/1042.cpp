//Author ::  ABHINAV3010 ::

#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
fast;
ll n;
cin>>n;
vector<ll>v;
for(int i=0;i<n;i++)
{
    ll a;
    cin>>a;
    v.pb(a);
}
int ans=0;
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        vector<ll>m=v;
        for(int x=i;x<=j;x++)
        {
            m[x]=1-m[x];
        }
        int sum=0;
        for(int k=0;k<m.size();k++)
        {
            sum+=m[k];
        }
        ans=max(sum,ans);
    }
}
cout<<ans<<endl;
return 0;
}
