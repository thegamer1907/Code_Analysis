#include <iostream>
#include <bits/stdc++.h>
#define  pb push_back
#define  pf push_front
#define  S second
#define  F first
#define ra ragham
#define ll long long
//#define int long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
typedef pair<ll,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
//ifstream fin ("in.txt");
//ofstream fout ("out.txt");
map<pii,int>k;
int main()
{
  ll n , m , q ;
  cin >> n >> m;
  ll a[n+2][m+2] ;
  for(ll y= 1 ; y <= n ; y++)
  for(ll x = 1 ; x <= m ; x++)
  cin>>a[y][x];
  ll pa[m+2][n+2] ;
  for(ll y= 1  ;y<=m ; y++)
  for(ll i = 1 ;i<=n;i++)
  {
      pa[y][i] = pa[y][i-1]+(a[i][y]<a[i-1][y]);
      if(i==1)
      pa[y][i] = 0 ;
  }
  cin >> q ;
  while(q)
  {
      ll i , j ;
      cin >> i >> j ;
      ll w = k[pii(i,j)];
      if(w)
      {
          if(w==1)
          printf("%s\n","No");
          else
          printf("%s\n","Yes");
      }
      else
      {
          for(ll y= 1 ; y <= m+1; y++)
          {
              if(y==m+1)
              {
                  k[pii(i,j)] = 1 ;
                  printf("%s\n","No");
                  break ;
              }
              if( pa[y][j]-pa[y][i]==0)
              {
                  k[pii(i,j)] = 2 ;
                  printf("%s\n","Yes");
                  break ;
              }
          }
      }
      q--;
  }

}