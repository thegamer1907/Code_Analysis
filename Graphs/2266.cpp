#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define s second
#define f first

typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<vector<int> > g(n);
    vector<int> roots;
    for(int i=0;i<n;i++){
        int u;
        cin >> u;
        if(u == -1)
            roots.pb(i);
        else
            g[u-1].pb(i);
    }
    vector<int> lvl(n,-1);
    int ans = 0;
    for(auto i:roots){
        if(lvl[i] == -1){
            queue<int> q;
            q.push(i);
            lvl[i] = 1;
            while(q.size()){
                int u = q.front();
                q.pop();
                for(auto v:g[u]){
                    if(lvl[v] == -1){
                        lvl[v] = 1 + lvl[u];
                        q.push(v);
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
        ans = max(ans, lvl[i]);
    cout << ans << endl;
}
