/* If you live to be a hundred,
I want to live to be a
hundred minus one day,
so I never have to live
without you.
-- Winnie the Pooh    */
//RTn_E
#include <bits/stdc++.h>
#define __Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define __file freopen("input.txt", "r", stdin) ; freopen("output.txt", "w", stdout) ;
#define ll long long
#define pb push_back
using namespace std;
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 100;

//Main CODE :/\

int a[maxn] , color[maxn];
vector <int> g[maxn];
void dfs (int v , int p = -1) {
    if (p != -1)
        color[v] = color[p] + 1;
    for (auto u : g[v]){
        if (p != u)
            dfs(u , v);
    }
}
void addedge (int v , int u){
    g[v].pb(u);
    g[u].pb(v);
}
int main() {
    __Sync;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] != -1)
            addedge(i , a[i]);
    }
    int maxi = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] == -1){
            color[i] = 1;
            dfs(i);
        }
    }

//    for (int i = 1; i <= n; i++)
  //      cout << color[i] << endl;
    sort(color , color + n + 1);
    cout << color[n];
    return 0;
}
