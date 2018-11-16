/***************BISMILLAHIR RAHMANIR RAHIM***************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
using namespace std;

#define  ll             long long int
#define  ull            unsigned long long int
#define  ld             long double
#define  fast()         ios :: sync_with_stdio(false); cin.tie(0);
#define  max3(a,b,c)    max(a,max(b,c))
#define  max4(a,b,c,d)  max(max3(a,b,c),d)
#define  min3(a,b,c)    min(a,min(b,c))
#define  min4(a,b,c,d)  min(min3(a,b,c),d)
#define  loop(i,val,n)  for(int i=val; i<n; i++)
#define  pool(i,val,n)  for(int i=n-1; i>=val; i--)
#define  st             string
#define  vecc           vector<char>
#define  veci           vector<int>
#define  vecli          vector<ll>
#define  vecp           vector<pair<int,int> >
#define  pb             push_back
#define  mp             make_pair
#define  all(v)         v.begin(),v.end()
#define  sz             size()
#define  nl             "\n"
#define  mod            1000000007
#define  bye            return 0
ll c[100010];
int main()
{
  ll b,i,j,k,l,m,n,o,p,q=0,r=0,ck=0;
  fast();
  cin>>n>>m;
  ll a[n],d[n];

  for(i=0; i<n; i++){
    cin>>a[i];
  }
  for(i=n-1; i>=0; i--){
    if(c[a[i]]==0){
        c[a[i]]++;
        ck++;
    }
    d[i]=ck;
  }

  for(i=0; i<m; i++){
    cin>>b;
    cout<<d[b-1]<<nl;
  }

    bye;
}
/****************ALHAMDULILLAH*****************/
