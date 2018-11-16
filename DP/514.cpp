//#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include<math.h>
#include <set>
#include <time.h>
#include <map>
#include <fstream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <array>
#include <bitset>
#include <complex>
#include <numeric>
using namespace std;
#define sz(a) int((a).size())
#define ll long long
#define pb push_back
#define ld long double
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define allr(c) (c).rbegin(),(c).rend()
#define For(i,n) for(ll i=0;i<n;i++)
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(a,n) for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n) for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define max3(a,b,c) return (lli(a)>lli(b)?(lli(a)>lli(c)?a:c):(lli(b)>lli(c)?b:c))
#define max4(a,b,c,d) return (max3(a,b,c)>lli(d)?(max3(a,b,c)):d)
#define min3(a,b,c) return (lli(a)<lli(b)?(lli(a)<lli(c)?a:c):(lli(b)<lli(c)?b:c))
#define min4(a,b,c,d) return (max3(a,b,c)<lli(d)?(max3(a,b,c)):d)
#define sa 100000
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll pow1(ll a)
{
    ll m=1;
    for(ll i=1;i<=a;i++)
        m*=2;
    return m;
}

int mod(string num, int a)                //calculate num%a
{
    int res = 0;
    
    for (int i = 0; i < num.length(); i++)
    {
        res = (res*10 + (int)num[i] - '0') %a;
        cout<<res<<endl;
    }
    return res;
}
ll modulo(ll a, ll b, ll n)             //calculate (a^b)%n
{
    long long x=1, y=a;
    while (b > 0)
    {
        if (b%2 == 1)
        {
            x = (x*y) % n;
        }
        y = (y*y) % n;
        b /= 2;
    }
    return x % n;
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
ll h2(ll n)
{
    ll res = 0;
    for (ll i=n; i>=1; i--)
    {
        // If i is a power of 2
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
ll pow2(ll n)
{
    ll x=1;
    for(ll i=1;i<=n;i++)
        x*=2;
    return x;
}
ll ar[1000][1000]={},M=1000000007;
ll BC(ll n, ll k)
{
    if(ar[n][k]!=0)
        return ar[n][k];
    ll C[k+1];
    memset(C, 0, sizeof(C));
    
    C[0] = 1;
    
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = min(i, k); j > 0; j--)
        {
            C[j] = C[j] + C[j-1];
            C[j]%=M;
        }
    }
    ar[n][k]=C[k];
    return C[k];
}
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    
    return true;
}

// Function to print primes
void printPrime(ll n,vector<ll> v,ll x)
{
    for (ll i = 2; i <= n; i++) {
        if (isPrime(i))
        {
            v.pb(i);
        }
    }
    ll d=v.size();
    for(ll i=0;i<d;i++)
    {
        if(x%v[i]==0)
        {
            ll fuck=x-v[i];
            cout<<1+fuck/2;
            return;
        }
    }
    cout<<1;
}
int main()
{
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // let the coding escapade begins...
    
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll> v(n);
    v[0]=0;
    for(ll i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            v[i]=v[i-1]+1;
        }
        else
            v[i]=v[i-1];
    }
    ll x;
    cin>>x;
    while(x--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<v[b-1]-v[a-1]<<endl;
    }
}
