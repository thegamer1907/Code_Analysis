#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pri pair<int,int>
#define prll pair<ll,ll>

#define gch(ch) scanf("%c",&ch)
#define gcharr(arr,n) FOR(i,0,n) gch(arr[i])

#define gi(x) scanf("%d",&x)
#define gi2(x,y) scanf("%d %d",&x,&y)
#define gi3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define giarr(arr,n) FOR(i,0,n) gi(arr[i])
#define pi(x) printf("%d ",x)

#define gll(x) scanf("%lld",&x)
#define gll2(x,y) scanf("%lld %lld",&x,&y)
#define gll3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define gllarr(arr,n) FOR(i,0,n) gll(arr[i])
#define pll(x) printf("%lld ",x)

#define gld(x) scanf("%lf",&x)
#define gldarr(arr,n) FOR(i,0,n) gld(arr[i])
#define pld(x) printf("%ld ",x)
#define pline printf("\n")

#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=a;i>=b;i--)
#define deb(x) cout<<#x<<" : "<<x<<endl;
#define debug(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;

#define pb push_back
#define mp make_pair
#define fir first
#define sec second
using namespace std;

ll maxarr(vll &arr);
ll minarr(vll &arr);
ll gcd(ll a, ll b);
ll choose(ll n,ll k);
bool isprime(ll n);
void setprime(bool isprime[],ll n);

int main()
{
    string str;
    cin>>str;

    ll n;
    gll(n);

    string temp[n];
    FOR(i,0,n)
    cin>>temp[i];

    FOR(i,0,n)
    {
        if(str==temp[i])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    bool flag1 = false;
    bool flag2 = false;
    FOR(i,0,n)
    {
        if(temp[i][1]==str[0])
            flag2=true;
        if(temp[i][0]==str[1])
            flag1=true;
    }
    if(flag1 && flag2)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}

ll maxarr(vll &arr)
{
    ll maxll = LONG_LONG_MIN;
    FOR(i,0,arr.size())
    maxll = max(arr[i],maxll);
    return maxll;
}

ll minarr(vll &arr)
{
    ll minll = LONG_LONG_MAX;
    FOR(i,0,arr.size())
    minll = min(arr[i],minll);
    return minll;
}

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

ll choose(ll n,ll k)
{
    if(k==0)  return 1;
    return (n* choose(n-1,k-1))/k;
}

bool isprime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

void setprime(bool isprime[],ll n)
{
    FOR(i,0,n)
    isprime[i]=true;

    isprime[0]=false;
    isprime[1]=false;

    FOR(i,2,n)
    {
        for(ll j=2;i*j<n;j++)
        isprime[i*j]=false;
    }
}
