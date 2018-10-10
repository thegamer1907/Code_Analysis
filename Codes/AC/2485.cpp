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
void setprime(bool isprime[],ll n);

ll cnt[10000001];
ll sum[10000001];
bool isprime[10000001];

int main()
{
    ll n;
    gll(n);

    FOR(i,0,10000001)
    {
        isprime[i]=true;
        cnt[i]=0;
    }

    FOR(i,0,n)
    {
        ll temp;
        gll(temp);
        cnt[temp]++;
    }

    //------------------------------------

    isprime[0]=false;
    isprime[1]=false;
    for(ll i=2;i<10000001;i++)
    {
        for(ll j=2;i*j<10000001;j++)
            isprime[i*j]=false;
    }

    //-----------------------------------

    FOR(i,0,10000001)
    {
        if(isprime[i]==false)
            sum[i]=0;
        else
        {
            sum[i]=0;
            for(ll j=0;i*j<10000001;j++)
                sum[i] = sum[i] + cnt[i*j];
        }
    }

    //-----------------------------------------

    FOR(i,0,10000001)
    {
        sum[i] = sum[i]+sum[i-1];
    }

    ll q;
    gll(q);

    while(q--!=0)
    {
        ll l,r;
        gll2(l,r);

        if(r>=10000001)
            r=10000000;
        if(l>10000001)
            l=10000001;
        if(l==0)
        {
            cout<<sum[r]<<endl;
        }
        else
        {
            cout<<sum[r]-sum[l-1]<<endl;
        }
    }

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
