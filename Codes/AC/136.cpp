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
typedef pair<int,char> cii ;
typedef pair<ll,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
//ifstream fin ("in.txt");
//ofstream fout ("out.txt");
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
const int maxn = 1e5+10;
ll a[maxn],n,m,sum;
ll ja[1000000+10];
int main()
{
  cin >> n ;
  for(ll y= 1 ;  y<= n ; y++)
  {
      cin >> a[y] ;
      for(ll i = 1 ; i  <= a[y];i++)
        ja[sum+i]=y;
      sum+=a[y];
  }
  cin >> m ;
  while(m)
  {

      ll k ;
      cin >> k ;
      cout<<ja[k]<<endl;
      m--;
  }

}

/*
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
#define int long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
//ifstream fin ("in.txt");
//ofstream fout ("out.txt");
const int delta = 10651 ;
const int maxn = 1e6+100;
vector<ll>ans;
ll a[maxn] ;
ll v[maxn] ;
ll c[maxn] ;
ll pa[maxn] ;
ll jam ;
void dob(ll i , ll j , ll k)
{
    if(i+1==j)
    {
        ll e = pa[i] ;
        e%=delta;
        e*=(i+1) ;
        e%=delta;
        e = (1LL*e*e)%delta ;
        jam+=e;
        jam%=delta;
        return ;
    }

    ll mid = (i+j)/2 ;
    ll kk = pa[mid] ;
    if(kk <= k )
    dob(mid , j , k);
    else
    dob(i , mid , k);
}

bool amx(int a, int b)
{
    return v[a]<v[b] ;
}
ll n = 1000000;
ll k = 250000 ;

main()
{
    for(ll y= 2 ; y <= n ; y++)
    {
        if(a[y] == 0)
        {
            a[y] = 1 ;
            for(ll i = y ; i <= n ; i+=y)
            {
                if(a[i]==0)
                {
                    a[i] = i/y ;
                }

            }

        }
        v[a[y]]++ ;
    }
    for(ll y= 1 ; y <= n ; y++)
    {
            for(ll i = y ; i <= n ; i+=y)
            {
                c[i]++;

            }
            if(c[y]<=5&&c[y]>=3)
            {
                ans.pb(y);
                //cout<<y<<' ';
            }
    }
    sort(ans.begin() , ans.end() , amx) ;
    pa[0] = v[ans[0]] ;
    for(ll y= 1; y < ans.size() ; y++)
    pa[y] = pa[y-1]+v[ans[y]] ;

    pa[ans.size()] = 1000000000000000000 ;
    for(ll y= 1 ; y <= k ; y++)
    {
        dob(0 , ans.size() , y) ;
    }
    cout<<jam ;

}
*/
/*
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
//setprecision(8)
//ios_base::sync_with_stdio(false);
//ifstream fin ("in.txt");
//ofstream fout ("out.txt");
const int delta = 10321 ;
ll n = 2020 ;
ll tav(ll n , ll i)
{
    if(i==1)
    return n ;
    if(i==0)
    return 1 ;
    ll o = tav(n , i/2) ;
    o*=o;
    o%=delta ;
    if(i%2)
    o=(1LL*o*n)%delta ;
    return o ;
}
ll ans = 0 ;
int main()
{
 for(ll y= 1 ; y <= n ; y++)
 ans+=tav(2,y*2),ans%=delta ;
 for(ll i = 1 ; i < n  ; i++)
 for(ll j =i+1; j <= n ; j++)
 {
     ll k = (j*4)/(j/__gcd(i , j));
     ans+=tav(2 , k) ;
     ans%= delta ;
 }
 cout<<ans;
}
*/
/*
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
const int maxn = 600000 ;
pii a[maxn] ;
int b[maxn] ;
int ans[maxn][3] ;
ll mins[maxn][21] ;
bool amx(int c , int d)
{
    if(a[c].F != a[d].F)
        return a[c].F < a[d].F ;
    return a[c].S < a[d].S ;
}
int main()
{
    ll n ;
    cin >> n ;
    for(ll y= 1 ; y <= n ; y++)
    {
        b[y] = y ;
        ll i , j ;
        cin >> i >> j ;
        a[y] = pii(i,j) ;
    }
    sort(b+1,b+1+n , amx);
    for(ll y = 0 ; y <= 20 ; y++)
        mins[n][y] =100000000 ;
    for(ll y = n- 1 ; y > 0 ; y--)
    {
        mins[y][0] = a[b[y+1]].S;
        for(ll i = 1 ; i <= 20 ;i++)
        {
            if(y+(1<<i) > n)
            mins[y][i] =min(mins[y+1][i-1] , a[b[y+1]].S );
            else
            mins[y][i] =min(mins[y][i-1] , mins[y+(1<<(i-1))][i-1]);
            cout<<y<<' '<<i<<' '<<mins[y][i]<<endl ;
        }
    }
}
*/
/*
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
typedef pair<pii,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
bool a[34004][34004];
int main()
{

    ll i = 0 ;
    ll j = 0 ;
    ll w = 17000 ;
    ll o = 0 ;
    ll y = 2000000000 ;
    while(y)
    {
        if(y > 1999999900)
        cout<<i << ' '<< j <<endl;
        a[i+17000][j+17000] = 1 ;
        if(o == 0)
        {
            if(!a[i+1+w][j+w])
                i++,o=1;
            else
                i--,o=3;
        }
       else if(o == 1)
        {
            if(!a[i+w][j-1+w])
                j--,o=2;
            else
                j++,o=0;
        }
       else if(o == 2)
        {
            if(!a[i-1+w][j+w])
                i--,o=3;
            else
                i++,o=1;
        }
       else if(o == 3)
        {
            if(!a[i+w][j+1+w])
                j++,o=0;
            else
                j--,o=2;
        }

        y-- ;
    }
    i = 2000000000;
    j = 2000000000;
    ll q = i*j ;
    if(q < 0)
        q = -q ;
    q%=29123;
    cout<<q;

}
*/
/*
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
typedef pair<pii,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
const int maxn = 29123+10;
bool a[maxn];
int h[maxn] ;
vector<int>v;
ll fasele ;
ll mod = 29123 ;
void dfs(int n)
{
    h[n] = h[n/2]+1;
    if(n*2 < maxn  )
    dfs(n*2);
    if((n*2)+1 < maxn  )
    dfs((n*2)+1);

}
void fa(int i , int j)
{
    fasele = 0 ;
    if( h[i] < h[j])
    {
         fa(j , i) ;
         return ;
    }
    fasele+=h[i]-h[j] ;
    ll p = fasele ;
    while(p)
    {
        i/=2;
        p--;
    }
    while(i != j)
    {
        fasele+=2;
        i/=2;
        j/=2;
    }

}
int main()
{
    ll ans = 1 ;
    for(ll y = 2 ; y < maxn ; y++)
    {
        if(!a[y])
        {

            v.pb(y) ;
            for(ll i = y*2 ; i < maxn ; i+=y)
                a[i]= 1 ;

        }
    }
    dfs(1);
    for(ll i = 0 ; i < v.size() - 1 ; i++)
    for(ll j = i+1; j < v.size() ; j++)
    {
        ll x = v[i] ;
        ll y = v[j] ;
        if(!a[x+y+1])
        {
            fa(x, y);
            if( x <= 32 && y <= 32)
            cout<<x<<' '<<y<< ' '<<fasele<<endl;
            ans*=fasele;
            ans%=mod;
        }
    }
    cout<<ans ;


}
*/
/*
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
typedef pair<pii,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);

int main()
{
  ll ans  = 1 ;
  ll mod = 29123 ;
  for(ll y= 2 ; y <= 2011 ; y++)
  {
      for(ll i = 2 ; i <= y ; i++)
      {
          if(i == y)
          {
              ll w = i ;
              while(w <= 2011)
              w*=i;

              w/=i;
              cout<<y<< " : "<<w<<endl;
              w%=mod;
              ans*=w;
              ans%=mod ;
              break ;
          }


          if(!(y%i))
            break ;
      }
  }
  cout<<ans;
}
*/
/*
//SCC
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
typedef pair<pii,pii> piii ;

//setprecision(8)
//ios_base::sync_with_stdio(false);
ll dp[1005][4][2];
ll a[1005];
int main()
{
    ll n ;
    cin >> n ;
    for(ll y = 0 ; y < n  ; y++)
        cin >> a[y] ;
    dp[0][0][0] = 1 ;
    dp[0][1][1] = 1 ;
    for(ll y = 1 ; y < n ; y++)
    {
        if(a[y-1] == 0)
        {
            dp[y][0][0] = dp[y-1][0][0];
             dp[y][1][0] = 0 ;
              dp[y][2][0] = 0 ;
               dp[y][3][0] = 0 ;
                dp[y][0][1] = 0 ;
                 dp[y][1][1] = 0;
                  dp[y][2][1] = 0;
                   dp[y][3][1] = 0;
        }
        if(a[y-1] == 1)
        {
            dp[y][0][0] = dp[y-1][1][0];
             dp[y][1][0] = dp[y-1][1][1] ;
              dp[y][2][0] = 0 ;
               dp[y][3][0] = 0 ;
                dp[y][0][1] = 0 ;
                 dp[y][1][1] = dp[y-1][0][0] ;
                  dp[y][2][1] = 0 ;
                   dp[y][3][1] = 0 ;
        }
        if(a[y-1] == 2)
        {
            dp[y][0][0] = 0 ;
             dp[y][1][0] = dp[y-1][2][1] ;
              dp[y][2][0] = 0 ;
               dp[y][3][0] = 0 ;
                dp[y][0][1] = 0 ;
                 dp[y][1][1] = dp[y-1][1][0] ;
                  dp[y][2][1] = dp[y-1][1][1] ;
                   dp[y][3][1] = 0 ;
        }
        if(a[y-1] == 3)
        {
            dp[y][0][0] = 0 ;
             dp[y][1][0] = 0 ;
              dp[y][2][0] = 0 ;
               dp[y][3][0] = 0 ;
                dp[y][0][1] = 0 ;
                 dp[y][1][1] = 0 ;
                  dp[y][2][1] = dp[y-1][2][1] ;
                   dp[y][3][1] = 0 ;
        }
    }
    cout<<dp[n-1][a[n-1]][1]+dp[n-1][a[n-1]][0];

}
*/

