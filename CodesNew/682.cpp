/*
 * Aishwariya Singha Roy (RiuSRoy), NitS
*/
#include <bits/stdc++.h>
#define ll long long
#define loop(i,s,e) for (ll i=s;i<=e;i++)
#define pool(i,s,e) for(ll i=s;i>=e;i--)
#define riu() ll t;cin >> t;while(t--)
#define vis(v,size) vector <string> v(size);
#define vi(v) std::vector<ll> v;
#define pii pair<ll,ll>
#define pb(n) push_back(n)
#define mp(a,b) make_pair(a,b)
#define fill(a,value) memset(a,value,sizeof(a)) 
#define MOD 1000000007
#define vit vector<ll>::iterator
#define tr(itr,adj,v) for(vit itr = adj[v].begin(); itr!=adj[v].end(); ++itr)
#define PI  3.14159265358979323846
#define MAX 1000005
#define vpi(v) vector <pair <ll,ll> > v
#define debug() cout<<"######"<<endl 
using namespace std;
//int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1};


int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);  
    ll n,m;
    cin >> n >> m;
    vis(PolandBall, n);
    vis(EnemyBall , m);
    loop(i,0,n-1)
    {
      cin >> PolandBall[i];
    }
    loop(i,0,m-1)
    {
      cin >> EnemyBall[i];
    }
    sort(PolandBall.begin(), PolandBall.end());
    sort(EnemyBall.begin(), EnemyBall.end());
    ll i = 0, j = 0, common = 0;
    while(i < n && j < m)
    {
      if(PolandBall[i] == EnemyBall[j])
      {
        ++i;
        ++j;
        ++common;
      }
      else if(PolandBall[i] < EnemyBall[j])
      {
        ++i;
      }
      else
      {
        ++j;
      }
    }
    ll p = n - common;
    ll e = m - common;
    if(p > e)
    {
      cout << "YES" << endl;
    } 
    else if(e > p)
    {
      cout << "NO" << endl;
    }
    else
    {
      if(common & 1)
      {
        cout << "YES"<< endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    return 0;
}
