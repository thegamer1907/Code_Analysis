#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(arr) arr.begin() , arr.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i , n) for(int i = 0 ; i < n ; i++)
#define siz(temp) temp.size()
#define len(str) str.length()
vector<ll> prime(5000005 , 1);

void cal_primearray(ll n)
{

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 1)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = 0;
        }
    }
}
ll modexpo(ll a , ll b)
{
    ll res = 1;
    while(b > 0)
    {
        if(b&1)
            res = (res*a)%mod;
        a=(a*a)%mod;
        b >>=1;
    }
    return res;
}
ll expo(ll a , ll b)
{
    ll res = 1;
    while(b > 0)
    {
        if(b&1)
            res = (res*a);
        a=(a*a);
        b >>=1;
    }
    return res;
}
ll gcd(ll a , ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a , a);
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n%2 == 0 || n%3 == 0)
        return false;
    for (int i = 5 ; i*i <= n ; i+=6)
    {
        if ((n%i==0) || (n%(i + 2) == 0))
            return false;
    }
    return true;
}

ll max_value(vector<ll> arr)
{
    ll m=0;
    for (int i = 0 ; i < arr.size() ; i++)
        m = max(m , arr[i]);
    return m;
}

vector<ll> adj[10004 + 1];
vector<ll> parent(10004 + 1 , 0);
vector<ll> vis(10004 + 1 , 0);
void dfs(int n)
{
    vis[n] = 1;
    for (int i = 0 ; i < adj[n].size() ; i++)
    {
        if (!vis[adj[n][i]])
        {
            parent[adj[n][i]] = n;
            dfs(adj[n][i]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    parent.resize(n + 1);
    vis.resize(n + 1);
    for (int i = 0 ; i < n - 1 ; i++)
    {
        ll x;
        cin >> x;
        adj[i + 2].pb(x);
        adj[x].pb(i + 2);
    }
    vector<ll> colour(n + 1 , 0);
    for (int i = 1 ; i <= n ; i++)
        cin >> colour[i];
    dfs(1);
    ll ans=0;
    // for (int i = 2 ; i <= n ; i++)
    //     cout << i << " " << vis[i] << endl;
    for (int i = 2 ; i <= n ; i++)
    {
        if (colour[parent[i]] != colour[i])
            ans++;
    }
    cout << ans + 1 << endl;
    return 0;
}