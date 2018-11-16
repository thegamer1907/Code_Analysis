#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
int main()
{
    string s;
    cin>>s;
    ll x=s.length();
    ll a[x+1]={0};
    for(int i=0;i<x-1;i++)
    {
        if(s[i]==s[i+1])
        {
            a[i+1]=1;
        }
    }
    for(int i=1;i<=x;i++)
    {
        a[i]=a[i-1]+a[i];
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        y--;
        cout<<a[y]-a[x-1]<<endl;  
    }
    return 0;
}