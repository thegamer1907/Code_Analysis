//IN THE NAME OF GOD
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
//setprecision(8)
//ios_base::sync_with_stdio(false);
ll pa[100000+10][2] ;
ll ans , n , k ;
void dob(int a , int b , int i , int j)
{
    if(i+1 == j)
    {
        ll u ;
        if(b != 100001)
        u = i-b ;
        else
        u = i+1;
        ans = max(ans ,u);
        return ;
    }


    ll mid = (i+j)/2;
    ll javab = pa[mid][a]-pa[b][a] ;
    if(javab > k)
        dob(a , b , i , mid);
    else
        dob(a , b , mid ,j);
}
int main()
{
    ans = 1 ;
    cin >>n >> k ;
    string a ;
    cin >> a ;
    pa[0][1-(a[0]=='a')]++;
    for(ll y = 1 ; y < n ; y++)
    {
        pa[y][0] = pa[y-1][0] ;
        pa[y][1] = pa[y-1][1] ;
        pa[y][1-(a[y]=='a')]++;
    }
    for(ll y = 0 ; y < n ; y++)
    {
        if(y != 0)
        {
        dob(0 , y-1 , y , n);
        dob(1 , y-1 , y , n);

        }
        else
        {
        dob(0 , 100000+1 , y , n);
        dob(1 , 100000+1 , y , n);

        }

    }
    cout<<ans;
}