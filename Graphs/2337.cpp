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

int main()
{
    int n;
    cin >> n;
    vector<ll> adj[n + 1];
    vector<int> parent;
    for (int i = 1 ; i <= n ; i++)
    {
        int temp;
        cin >> temp;
        if (temp != -1)
            adj[temp].pb(i);
        else
            parent.pb(i);
    }
    //cout << parent.size() << endl;
    int vis[n + 1]={0};
    int depth[n + 1]={0};
    for (int i = 0 ; i < parent.size() ; i++)
    {
        //cout << parent[i] << endl;
        if (!vis[parent[i]])
        {
            depth[parent[i]] = 1;
            vis[parent[i]] = 1;
            queue<int> q;
            q.push(parent[i]);
            while(!q.empty())
            {
                ll z = q.front();
                q.pop();
                for (int j = 0 ; j < adj[z].size() ; j++)
                {
                    if (!vis[adj[z][j]])
                    {
                        vis[adj[z][j]] = 1;
                        q.push(adj[z][j]);
                        depth[adj[z][j]] = depth[z] + 1;
                    }
                }
            }
        }
    }
    int ma=0;
    for (int i = 1 ; i <= n ; i++)
        ma = max(depth[i] , ma);
    cout << ma << endl;
    return 0;
}