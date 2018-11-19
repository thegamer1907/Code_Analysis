//IN THE NAME OF GOD
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <map>
#define  pb push_back
#define  S second
#define  F first
#define ra ragham
#define ll long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
bool dp[16] ;
int main()
{
 ll n , k ;
 cin >> n >> k ;
 for(ll y=  0 ; y < n ;  y++)
 {
     ll o = 0 ;
     ll d = 0 ;
     ll u = 0 ;
     while(u != k)
     {
         cin >> d ;
         o+=d;
         o*=2;
         u++;
     }
     o/=2;
     dp[o] = 1 ;
 }
 for(ll j = 0 ; j < 16 ; j++)
 for(ll i = 0 ; i < 16 ; i++)
 {
     if(dp[j] && dp[i] && (!(i&j)))
     {
         cout<<"yes";
         return 0;
     }
 }
 cout<<"NO";
}