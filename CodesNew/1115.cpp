#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pr;
typedef vector<pr> vp;
typedef vector<vp> vpp;
typedef vector<vector<ll> > graph;
#define pb push_back
#define mp make_pair
#define maxi INT_MAX
#define mini INT_MIN
#define ifl(i,a,b) for(ll i=a;i<b;i++)
#define dfl(i,a,b) for(ll i=a-1;i>=b;i--)
ll mod = pow(10,9) + 7;

ll gcd(ll a,ll b)
{
    if(a<b)
    swap(a,b);
    if(b==0)
    return a;
    return gcd(b,a%b);
}
ll sod(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
void dfs(graph& g, int visited[], int start)
{
    visited[start]=1;
    for(int i=0;i<g[start].size();i++)
    {
        if(visited[g[start][i]]==0)
        {
            dfs(g,visited,g[start][i]);
        }
    }
}
ll bit_getsum(ll bit[], ll index)
{
    int a=0;
    while(index>0)
    {
        a+=bit[index];
        index-=(index&(-index));
    }
    return a;
}
void bit_update(ll bit[], int n,ll index, ll v)
{
    while(index<=n)
    {
        bit[index]+=v;
        index+=(index&(-index));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed;
    cout<<setprecision(9);
    ll n;
    cin>>n;
    ll start=1,end = pow(10,18);
    while(start<end)
    {
        ll mid = (start+end)/2;
        ll temp = n ;
        ll eat=0;
        while(temp>0)
        {
            ll t = temp;
            t-=min(t,mid);
            t-=(t/10);
            eat+=min(temp,mid);
            temp = t;
        }
        if(2*eat>=n)
        {
            end = mid;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<start;
    
    
    
}