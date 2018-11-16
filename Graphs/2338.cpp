    #include <bits/stdc++.h>

    using namespace std;

    /* ---*-----*-----
    ---------o--------
    -----------------*/

    typedef long long ll;
    typedef long double ld;

    typedef pair<int, int> pi;
    typedef pair<ll,ll> pl;
    typedef pair<ld,ld> pd;

    typedef vector<int> vi;
    typedef vector<ld> vd;
    typedef vector<ll> vl;
    typedef vector<pi> vpi;
    typedef vector<pl> vpl;
    typedef vector<char> vc;

    #define mp make_pair
    #define pb push_back
    #define f first
    #define s second
    #define lb lower_bound
    #define ub upper_bound

    const int MOD = 1000000007;
    const int N = 100000;
    set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','y','e','u','i'};
    ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }

    int n,m,k,l,p=0,ans=0,res=0,posmin,posmax;
    string ch,ch1,ch2;
    bool tab[N];
    map<int,vi> adj;
    int pred[N];
    int dist[N];
    set<int> si;
    set<char> sc;
    map<char,int> mc;
    vl v,vv;

    void bfs(queue<int> q){
        while(!q.empty()){
        int u=q.front();
        q.pop();
        //cout << u << endl;
        //cout << dist[u]<< endl;
        if(adj[u].empty())ans=max(ans,dist[u]+1);
        for(int i=0;i<adj[u].size();i++){
            dist[adj[u][i]]=dist[u]+1;
            q.push(adj[u][i]);
        }
        }
    }


    int main(){
        ios_base::sync_with_stdio(false);
        //freopen("overcode.in", "r", stdin);
        memset(tab,0,sizeof(tab));
        memset(pred,-1,sizeof(tab));
        cin >> n ;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x>0){
                x--;
                adj[x].pb(i);
            }
        }
        //cout << dist[0] << endl;
        for(int i=0;i<n;i++){
         memset(dist,0,sizeof(dist));
         //cout << dist[i] << endl;
         queue <int> q;
            q.push(i);
            bfs(q);
        }
        cout << ans;
        return 0;
    }
