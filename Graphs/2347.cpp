#include <bits/stdc++.h>

#define loop(i,n)    for( int i=0; i<n; i++ )
#define loop1(i,a,n) for( int i=a; i<n; i++ )
#define vloop(i,a)   for( vector<int>::iterator i=a.begin(); i!=a.end(); i++ )
#define dloop(i,a)   for( deque<int>::iterator i=a.begin(); i!=a.end(); i++ )
#define PI 3.14159265
#define bc __builtin_popcountll
#define gc getchar_unlocked
#define pc putchar_unlocked
#define pb push_back
#define pf push_front
#define rf pop_front
#define rb pop_back
#define mp make_pair
#define fs first
#define sc second
#define fi ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9 + 7;
const ll INF = 1e9;

inline ll pwr(ll base,ll n,ll m){ll ans=1;while(n>0){if(n%2==1)ans=(ans*base)%m;base=(base*base)%m;n/=2;}return ans;}

const int sz = 2010;
int n, p[sz], depth[sz];
vector<int>adj[sz];

int dfs( int curr ) {
    int v = 0;

    if( depth[curr] != -1 )
        return depth[curr];

    vloop(j,adj[curr] ) {
        dfs(*j);
        v = max(v,dfs(*j));
    }
    return depth[curr] = v+1;
}

int main() {
    fi;

    cin>>n;
    memset(depth,-1,sizeof(depth));
    loop(i,n) {
        cin>>p[i+1];
        if( p[i+1] != -1 )
            adj[p[i+1]].pb(i+1);
    }

    int mx = 0;

    loop1(i,1,n+1) {
        if( p[i] == -1 ) {
            mx = max(mx,dfs(i));
        }
    }

    cout<<mx;

    return 0;
}
