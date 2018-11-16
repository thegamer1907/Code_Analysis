#include<bits/stdc++.h>

#define For(i,a,b)      for(int i = (a); i <= (b); ++i)
#define Ford(i,a,b)     for(int i = (a); i >= (b); --i)
#define pb		push_back
#define NAME ""
#define LOCAL
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int inf = 1e6;
const int Linf = 1e9;
const ll LLinf = (ll)1e18;
const int maxn = 1e6;
int n , chk[maxn];
vector<int> v[maxn];
int res = 0 , p[maxn];
void DFS(int u , int hi){
    res = max(res,hi);
    chk[u] = 1;
    for(auto c : v[u]){
        if(chk[c]==0){
            DFS(c,hi+1);
        }
    }
}
void Enter()
{
    cin >> n;
    For(i,1,n){
        cin >> p[i];
        if(p[i] != -1)v[p[i]].pb(i);
    }
}
void Init()
{

}
void Solve()
{
    For(i,1,n)if(chk[i] == 0 && p[i] == -1)DFS(i,1);
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    #ifdef LOCAL
        //freopen("TEST.INP","r",stdin);
        //freopen("TEST.OUT","w",stdout);
    #else
        freopen(NAME".INP","r",stdin);
        freopen(NAME".OUT","w",stdout);
    #endif // LOCAL
    Enter();
    Init();
    Solve();
}
