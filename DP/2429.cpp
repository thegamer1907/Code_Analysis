/*
 ############### sabka katega ###############
 ********************************
 */
//#include "stdc++.h"
#include<bits/stdc++.h>
#include<iostream>
#pragma warning(disable:4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tuple<int, int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;
typedef vector<int> vi;
#define mp make_pair
#define pb push_back
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
inline ll gcd(ll a,ll b){if(a==0) return b;return gcd(b%a,a);}
inline ll power(ll a,ll n,ll m){if(n==0) return 1;ll p=power(a,n/2,m);p=(p*p)%m;if(n%2) return (p*a)%m;else return p; }
#define flush fflush(stdout)

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
 ll MOD = 1000000007;
 
int main()
{
    ll t,k;
    cin>>t>>k;
    int a,b;
    ll dp[100001]={0};
    ll n1,sum=0,ans;
    dp[0]=1;
    for(ll i=1;i<=100000;i++)
    {
        if(i<k)
        dp[i]=1;
        else
        {
          dp[i]=(dp[i-1]+dp[i-k])%MOD;
        }
    }
    //cout<<dp[99613]<<endl;
    for(int i=1;i<=100000;i++)
        dp[i]=(dp[i]%MOD+dp[i-1]%MOD)%MOD;
       // cout<<dp[99613]<<endl;
    while(t--)
    {
        cin>>a>>b;
        ans=(dp[b]%MOD-dp[a-1]%MOD+MOD)%MOD;
        cout<<ans<<endl;
    }
    
    
    return 0;
}

