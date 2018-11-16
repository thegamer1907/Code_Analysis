/*
Author : sachinbisht939 || __B
*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define unlock_ios ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
#define run int t; cin >> t; while(t--)
#define c1(a) cout << #a << " : " << a << "\n";
#define c2(a,b) cout << #a << " : " << a << ", " << #b << " : " << b << "\n";
#define rep(c, a, b, d) for(int c = a; c < b; c += d)
#define repr(c, a, b, d) for(int c = a; c >= b; c -= d)
#define case(i) cout << "Case #" << i << ": ";
 
#define pb(x) push_back(x)
#define ff first
#define ss second
#define mp make_pair
#define int long long

# define lcm(a, b) (((a) * (b))/__gcd(a, b))

#define PI 3.14159265
 
typedef long double lld;
typedef pair < int,int > ii;
typedef pair < int, ii > iii;
typedef pair < char,int > ci;
typedef pair < int,char > ic;
typedef pair < string, int > si;

const int maxn = 1e5+10;
const int MOD = 1e9 + 7;

vector <bool> vis(100000+5);
vector <int> cat;
vector <vector <int> > vec(100000+5);
vector <int> res;
int rr = 0, d;

void dfs(int st)
{
    vis[st] = 1;
    int vo = 0;
    
    res.pb(st);
    
    for(int i = 0; i < vec[st].size(); i++)
    {
        if(!vis[vec[st][i]])
        {
            vo++;
            dfs(vec[st][i]);
        }
    }
    
    if(vo == 0)
    {
        int cc = 0, vv = 0;
        rep(i, 0, res.size(), 1)
        {
            // cout << res[i] << " ";
            if(cat[res[i]-1])
                cc++;
            else
                vv = max(vv, cc), cc = 0;
        }
        // cout << "\n";
        // c2(vv, cc)
        vv = max(vv, cc);
        if(vv <= d)
            rr++;
    }
    
    res.pop_back();
    
}

void solve()
{
    int n;
    cin >> n >> d;
    
    rep(i, 0, n, 1)
    {
        int a;
        cin >> a;
        cat.pb(a);
    }
    
    rep(i, 0, n-1, 1)
    {
        int a, b;
        cin >> a >> b;
        
        vec[a].pb(b);
        vec[b].pb(a);
    }
    vis[1] = 1;
    res.pb(1);
    for(int i = 0; i < vec[1].size(); i++)
    {
        if(!vis[vec[1][i]])
            dfs(vec[1][i]);
    }
    cout << rr;
    
}
 
// Driver Code
signed main()
{
    unlock_ios
    // int xxx = 0;
    
    // run
    {
        // xxx += 1;
        // case(xxx)
        solve();
    }
 
    return 0;
} 