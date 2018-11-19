#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
#define foor(x,s,y) for(ll x = s ; x < y ; x++)
#define pb(x) push_back(x);
#define pii pair<int,int>
#define pipii pair<int,pair<int,int>>
#define ppiii pair<pair<int,int>,int>
#define ppiipii pair<pair<int,int>,pair<int,int>>
#define pl pair<ll,ll>
#define plpl pair<ll,pair<ll,ll>>
#define ppl pair<pair<ll,ll>,ll>
#define pplpl pair<pair<ll,ll>,pair<ll,ll>>
#define ff first
#define ss second
#define mod 1000000007LL
#define OOi 1e9
#define OOl 1e18
#define mmst(ar,va) memset(ar , va , sizeof(ar))
#define ndl "\n"

typedef long long ll;
typedef long double ld;
using namespace std;

//const ld PI = acos(-1);
//const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
//const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

vector <int> adj[15];
int h,m,s,t1,t2,t;
bool ans = 0;
bool vis[15];

void dfs(int node = t1){
    vis[node] = 1;
    if(node == t2)
        ans = 1;
    if(ans)
        return;
    for(auto it : adj[node]){
        if(~it && !vis[it]){
            dfs(it);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    mmst(adj , 0);
    foor(i,2,12){
        adj[i].pb(i-1);
        adj[i].pb(i+1);
    }
    adj[1].pb(12);
    adj[1].pb(2);
    adj[12].pb(11);
    adj[12].pb(1);

    cin>>h>>m>>s>>t1>>t2;
    h = h * 3600 + m * 60 + s;
    m = m*60 + s;

    if(s%5){
        t = s/5;
        if(!t)
            t = 12;
        if(~adj[t][1])
            adj[adj[t][1]][0] = -1;
        adj[t][1] = -1;
    }
    else{
        t = s/5;
        if(!t)
            t = 12;
        if(~adj[t][1])
            adj[adj[t][1]][0] = -1;
        if(~adj[t][0])
            adj[adj[t][0]][1] = -1;
        adj[t][0] = -1;
        adj[t][1] = -1;
    }

    if(m%300){
        t = m/300;
        if(!t)
            t = 12;
        if(~adj[t][1])
            adj[adj[t][1]][0] = -1;
        adj[t][1] = -1;
    }
    else{
        t = m/300;
        if(!t)
            t = 12;
        if(~adj[t][1])
            adj[adj[t][1]][0] = -1;
        if(~adj[t][0])
            adj[adj[t][0]][1] = -1;
        adj[t][0] = -1;
        adj[t][1] = -1;
    }

    if(h%3600){
        t = h/3600;
        if(!t)
            t = 12;
        if(~adj[t][1])
            adj[adj[t][1]][0] = -1;
        adj[t][1] = -1;
    }
    else{
        t = h/3600;
        if(!t)
            t = 12;
        if(~adj[t][1])
            adj[adj[t][1]][0] = -1;
        if(~adj[t][0])
            adj[adj[t][0]][1] = -1;
        adj[t][0] = -1;
        adj[t][1] = -1;
    }

    /*foor(i,0,13){
        for(auto it : adj[i])
            cout<<it<<" ";
        cout<<ndl;
    }*/

    dfs();

    cout<<(ans ? "YES" : "NO");

    return 0;
}
