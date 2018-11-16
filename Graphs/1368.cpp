#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
ll isComposite(ll n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 1;
    return 0;        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll i=a[0]+1,k=0;    
    while(i<=t)
    {
        if(i==t)
        {
            k=1;
            break;
        }
        else if(i>t)
            break;
        else
        {
            i=i+a[i-1];
        }
    }
    if(k)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        