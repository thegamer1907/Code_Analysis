#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pp pair<ll,ll>
#define ps push
#define mod 1000000007
#define fi first
#define se second
ll power(ll a,ll b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    ll r=power(a,b/2)%mod;
    if(b%2==0)
    return (r*r)%mod;
    else
    return (((r*r)%mod)*a)%mod;
}
#define pri 1000009
int prime[pri];
void sieve(int n)
{ 
    prime[0]=prime[1]=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(!prime[i])
        {
            for(int j=2*i;j<=n;j++)
            {
                prime[j]++;
            }
        }
    }
}

bool comp(const pair<ll,ll> &a, 
               const pair<ll,ll> &b)
{
       return (a.second < b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int tmp=240-k;
    int count=0;
    int c=1;
    while(tmp>0&&(c<=n))
    {
        tmp-=(5*c);
        c++;
        count++;
    }
    if(tmp<0)
        count--;
    cout<<count;
    return 0;
}