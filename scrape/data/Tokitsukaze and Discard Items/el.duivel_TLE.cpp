#include<bits/stdc++.h>
using namespace std;


typedef long long           ll;
typedef unsigned long long  ull;

#define sf                  scanf
#define pf                  printf
#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define PF                  first
#define PS                  second
#define si(n)               scanf("%d",&n)
#define sii(x,y)            scanf("%d %d",&x,&y)
#define siii(x,y,z)         scanf("%d %d %d",&x,&y,&z)
#define sl(n)               scanf("%lld",&n)
#define sll(x,y)            scanf("%lld %lld",&x,&y)
#define slll(x,y,z)         scanf("%lld %lld %lld",&x,&y,&z)
#define FOR(i,x,y)          for(int i=x;i<y;i++)
#define RFOR(i,x,y)         for(int i=x;i>=y;i--)
#define CLR(arr,val)        memset(arr,val,sizeof arr);
#define vout(v)             for(int i=0;i<v.size();i++){ cout<<v[i]; if(i<v.size()-1) cout<<' '; else cout<<endl;}
#define TCL(test,t)         for(test=1;test<=t;test++)
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)
#define fastIO()            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAXP                1000006
#define MOD                 1000000007

vector<ll>v;

int main()
{
    ll n,m,k,x,pagerange=0,cut=0,step=0;
    cin>>n>>m>>k;
    for(ll i=0;i<m;i++){
        cin>>x;
        v.pb(x);
    }
    for(ll i=0;i<m;i++){
        if(v[i]<=pagerange){
            cut++;
            continue;
        }
        step++;
        pagerange+=cut;
        cut=1;
        if(v[i]<=pagerange){
            continue;
        }
        while(pagerange<v[i]){
            pagerange+=k;
        }
    }
    cout<<step<<endl;
    return 0;
}