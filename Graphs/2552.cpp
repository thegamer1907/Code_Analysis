#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " : " << arg1 << "\n";
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
 
#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);
 
const int N = 1e4 + 5;
int n;
vector<int> adj[N];
int ans;

int color[N];

void dfs(int u, int p){
    // trace(u, p);
    if(p == 0 || color[u] != color[p])
        ans++;
    for(auto v : adj[u]){
        if(v == p)  continue;
        dfs(v, u);
    }
}

int main(){
	io;
    cin >> n;
    for(int i = 2; i <= n; i++){
        int x;
        cin >> x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    for(int i = 1; i <= n; i++)
        cin >> color[i];
    dfs(1, 0);
    cout << ans;
	return 0;
} 



