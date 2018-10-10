#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vstr vector<str>

bool check(ll n, ll k)
{
    ll p = 0, temp, x;
    x = n;
    while(n>0)
    {
        temp = min(n,k);
        n -= temp;
        p += temp;
        n = n - n/10;
    }

    if(2*p >= x)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k,u,v,m; cin>>n;
    u = 1;
    v = n;

    while(u<v)
    {
        m = (u+v)/2;
        // cout<<u<<" "<<v<<" "<<m<<endl;
        if(check(n,m) == true)
            v = m;
        else
            u = m+1;
    }
    cout<<u;
    return 0;
}