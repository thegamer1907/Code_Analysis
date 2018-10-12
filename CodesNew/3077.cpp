#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(arr) arr.begin() , arr.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i , a , n) for(int i = a ; i < n ; i++)
#define siz(temp) temp.size()
#define len(temp) temp.length()
#define timepass 1073741824

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

ld dist(ll x1 , ll y1 , ll x2 , ll y2)
{
    return (ld)sqrt((long double)((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
}
ll squaredist(ll x1 , ll y1 , ll x2 , ll y2)
{
    return ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
ll nCr(ll n , ll r)
{
    if(r == 0)
        return 1;
    return (n*nCr(n - 1 , r - 1))/r;
}
// bool dfs(ll x , ll y)
// {
//     vis[x] = 1;
//     bool temp = true;
//     for (int i = 0 ; i < adj[x].size() ; i++)
//     {
//         if (!vis[adj[x][i]])
//         {
//             if (col[adj[x][i]] != y)
//                 return false;
//             temp = temp&dfs(adj[x][i] , y);
//         }
//     }
//     return temp;
// }
int main()
{
    ll k;
    cin >> k;
    string str;
    cin >> str;
    vector<ll> index;
    ll bar=0;
    rep(i , 0 , str.size())
    {
        if (str[i] == '0')
            bar++;
        else
        {
            index.pb(bar);
            bar=0;
        }
    }
    if (index.size() < k)
    {
        cout << 0 << endl;
        return 0;
    }
    index.pb(bar);
    ll ans=0;
    if (k == 0)
    {
        for (int i = 0 ; i < index.size() ; i++)
            ans += (index[i]*(index[i] + 1))/2;
        cout << ans << endl;
        return 0;
    }
    //cout << index.size() << endl;
    for (int i = 0 ; i < index.size() ; i++)
    {
        if (i + k >= index.size())
            break;
        ans += ((index[i]+1)*(index[i + k] + 1));
        //cout << index[i] << " " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}