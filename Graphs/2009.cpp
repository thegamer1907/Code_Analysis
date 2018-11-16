#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(),c.end()
#define loop(i,a,b) for(i=a; i<b; i++)
#define rloop(i,b,a) for(i=b; i>=a; i--)
#define tests int tt; cin>>tt; while(tt--)
#define MOD 1000000007
#define INF INT_MAX
#define MINF INT_MIN

using namespace std;
typedef long long ll;

vector<int> adj[100001];
bool v[100001];
int a[100001];

int f(int x, int m, int c){
    v[x]=1;
    if(a[x]==1) c++;
    else c=0;
    if(c>m) return 0;
    if(adj[x].size()==1 && v[adj[x][0]]) return 1;
    int i,cnt=0;
    loop(i,0,(int)adj[x].size()){
        if(!v[adj[x][i]]) cnt+=f(adj[x][i],m,c);
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i,j,n,m,x,y,c=0;
    cin>>n>>m;
    loop(i,0,n) cin>>a[i];
    loop(i,0,n-1){
        cin>>x>>y;
        adj[x-1].pb(y-1);
        adj[y-1].pb(x-1);
    }
    cout<<f(0,m,0);
    return 0;
}
