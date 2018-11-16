#include <bits/stdc++.h>
 
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define vll         vector<ll>
#define all(a)      (a).begin(),(a).end()
#define lol         1000000007
#define rep(i,a,b)    for(int i=a;i<b;i++)
#define SIZE        1000005
#define debug(x)    cerr << #x << " = " << x << endl;
#define F             first
#define S             second
#define endl        '\n'
#define deci(n)     cout<<fixed<<setprecision(n);
const double         pi=acos(-1.0);


using namespace std;

void MOD(ll &x)
{
    if (x >= lol) x -= lol;
    if (x < 0) x += lol;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

int cat[SIZE]={0};
vi adj[SIZE];
int leaf[SIZE]={0};
int vis[SIZE]={0};
int ans=0;
int m;

void dfs(int s, int cats)
{
    vis[s] = 1;
    if(cat[s]) cats++;
    else cats = 0;
    if(cats > m) return;
    if(cats <= m && leaf[s]) ans++;
    for(auto i : adj[s])
    {
        if(!vis[i]) dfs(i,cats);
    }
}

void solve()
{
    int n;
    cin>>n>>m;
    rep(i,0,n) cin>>cat[i];
    rep(i,0,n-1)
    {
        int x, y;
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    rep(i,1,n) if(adj[i].size()==1) leaf[i]=1;
    dfs(0,0);
    cout<<ans;
}



// Remove  debugs!!

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//    #endif
    int t=1;
//    cin>>t; int i=1;
    while(t--){
        //cout<<"Case #"<<i++<<": ";
        solve();
            //cout<<endl;    
      }
    return 0;
}