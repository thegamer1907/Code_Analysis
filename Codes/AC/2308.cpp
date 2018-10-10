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
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//setprecision(8)
//ios_base::sync_with_stdio(false);
const int maxn = 1e7 + 20 ;
int parch[maxn] ;
int ted[maxn] ;
bool aval[maxn] ;
ll n , m , d ;
int main()
{
  cin >> n ;
  while(n)
  {
      scanf("%d",&d);
      ted[d]++;
      n--;
  }
  for(ll y = 2 ; y < maxn ;y++)
  {
      if(!aval[y])
      {
          for(ll x = y ; x  < maxn ; x+=y)
            parch[y]+=ted[x],aval[x]=1 ;
      }
  }
  for(ll y = 1 ; y < maxn ; y++)
    parch[y]+=parch[y-1];
  cin >> m ;
  while(m)
  {
      ll r , l ;
      cin >> r >> l ;
      if(r > maxn)
        cout<<0;
      else
        l = min(maxn-1LL , l),cout<<parch[l]-parch[r-1];
      cout<<endl;

      m--;
  }
}