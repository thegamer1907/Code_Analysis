#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define MOD 1000000007ULL
#define HELL 1000000000ULL
#define MAXN 15000001
#define all(v) v.begin(),v.end()
#define FAST ios_base::sync_with_stdio(false)


typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;

int cat[100010]={0};
int n,m;
vector<int> g[100010];

set<int> sett;

bool visited[100010] = {0};

void dp(int c, int src)
{
    //cout << c << " " <<src <<"\n";
    visited[src]=1;

    if(cat[src]==1)
        c++;
    else
        c=0;

    if(c<=m)
    {
        if(g[src].size()==1 && src!=1)
            sett.insert(src);

        else
        {
            for(auto x: g[src])
            {
                if(visited[x]==0)
                    dp(c, x);
            }
        }

    }
}


int main()
{

    cin >> n >> m;

    for(int i=1;i<=n;i++)
        cin >> cat[i];

    int a,b;
    rep(i,n-1)
    {
        cin >> a >> b;
        //a--;
        //b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    /*for(int i=1;i<=4;i++)
    {
        cout << i <<" ->";
        for(auto x : g[i])
            cout << x << " ";

        cout << "\n";
    }*/

    dp(0,1);


    cout << sett.size();
}
