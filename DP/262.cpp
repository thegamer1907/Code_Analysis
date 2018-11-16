#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll ans=0;
    ll c[102]={0};
    ll d[102]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    ll m;
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        d[b[i]]++;
    }
    for(int i=1;i<=100;i++)
    {
        if(c[i]>0)
        {
            for(int j=i-1;j<=i+1;j++)
            {
                ans=ans+min(c[i],d[j]);
                ll x=min(c[i],d[j]);
                c[i]-=x;
                d[j]-=x;
            }
        }
    }
    cout<<ans;
    return 0;
}