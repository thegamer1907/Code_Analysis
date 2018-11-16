#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;


inline char nc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}

template<typename T = int>
inline T readNxt(){
    char c=nc();T x=0; int f=1;
    for(;c>'9'||c<'0';c=nc())if(c=='-')f=-1;
    for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc()); x*=f;
    return x;
}
string s;
ll n,m;
bool ok = false; ll rs = 1e9;
int vis[10000];
int dist[10000] ;
vector < vector < int > > g ;
void bfs(ll n )
{
    ll ans =0;

    queue < ll > q;
    dist[n]=0;

    q.push(n);
    vis[n]=true;

    while(!q.empty())
    {
        int x = q.front(); q.pop(); vis[x]=true;
        for(int i=0;i<g[x].size();i++)
            if(!vis[g[x][i]]) dist[g[x][i]] =dist[x]+1,q.push(g[x][i]);
    }


   return ;
}


void solve()
{
     cin>>n;
     memset(vis,false,sizeof(vis));
     memset(dist,0,sizeof(dist));
    g.clear(); g.resize(n);
     vector < int > heads ;
     for(int i=0;i<n;i++)
     {
         int x ;
         cin>>x;
         if(x==-1) heads.pb(i);
         else
         { x-- ;
             g[i].pb(x);
             g[x].pb(i);
         }

     }
     for(int i=0;i<heads.size();i++) bfs(heads[i]);
     int res [ 20001] ;
     memset(res,0,sizeof(res));
     for(int i=0;i<n;i++) res[dist[i]]++;
     int ans = 0;
     for(int i=0;i<n;i++) if(res[i]) ans++;

     cout<< ans ;


}


int main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //freopen("out.txt","w",stdout);
   //freopen("test.in","r",stdin);

solve();

    return 0;
}
