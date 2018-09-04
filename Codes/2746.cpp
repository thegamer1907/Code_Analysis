#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <map>
#define  pb push_back
#define  pf push_front
#define  S second
#define  F first
#define ra ragham
#define ll long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
typedef pair<pii,ll> piii ;
ll p[2] = {31 , 41} ;
ll mod[2]  = {1000000000+7,1000000000+9};
const int maxn = 1e6+100;
ll h[2][maxn];
ll mop[2][maxn] ;
ll n ;
string s ;
bool w ;
ll I(char &c)
{
    return c-'a'+1;
}
ll ans0(ll l , ll r)
{
   return ((h[0][r] - 1LL*h[0][l-1]*mop[0][r-l+1])%mod[0] + mod[0])%mod[0] ;
}
ll ans1(ll l , ll r)
{
   return ((h[1][r] - 1LL*h[1][l-1]*mop[1][r-l+1])%mod[1] + mod[1])%mod[1] ;
}
void dob(ll i , ll j)
{
    if(i+1==j)
    {
        if(i != 0)
        {
            for(ll y= i ; y > 0 ; y--)
            {
                 if(ans0(n-y+1,n) == h[0][y] && ans1(n-y+1,n) == h[1][y])
                 {
                     w = 1 ;
                     string pay ;
                     for(ll o = 1 ; o <= y ; o++)
                        pay+=s[o-1];
                     cout<<pay;
                     break ;
                 }
            }
        }
        return ;
    }
    ll mid = (i+j)/2 ;
    bool e= 0 ;
    for(ll y = 2 ; y < n && y + mid - 1 < n ; y++)
    {
        if(ans0(y,y+mid-1) == h[0][mid] && ans1(y,y+mid-1) == h[1][mid])
        {
            e = 1 ;
            dob(mid , j);
            break ;
        }
    }
    if(!e)
    dob(i , mid) ;
}
int main()
{
 cin >> s ;
 n = s.size() ;
 if(n < 3)
 {
     cout<< "Just a legend" ;
     return 0 ;
 }
 mop[0][0] = 1 ;
 mop[1][0] = 1 ;
 for(ll y= 1 ; y <= n ; y++)
 {
     mop[0][y] = (1LL*mop[0][y-1]*p[0])%mod[0];
     mop[1][y] = (1LL*mop[1][y-1]*p[1])%mod[1];
 }
 h[0][0] = 0 ;
 h[1][0] = 0 ;
 for(ll y = 1 ; y <= n ; y++)
 {
     h[0][y] = (1LL*h[0][y-1]*p[0]+I(s[y-1]))%mod[0];
     h[1][y] = (1LL*h[1][y-1]*p[1]+I(s[y-1]))%mod[1];
 }
 dob(0 , n - 1);
 if(!w)
    cout<< "Just a legend" ;
}
