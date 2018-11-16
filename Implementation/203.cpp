#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define sz(x) (int)x.size()

int n, l, r;
vector <int> g[300];

int main(){
    scanf("%d %d %d", &n, &l, &r);
    if (l>r)
        swap(l, r);
    for (int i=1; i<=n; ++i)
        g[1].pb(i);
    for (int i=1; i<=n; ++i){
        for (int j=0; j<sz(g[i]); j+=2){
            if (g[i][j]==l && g[i][j+1]==r){
                if (sz(g[i])==2)
                    puts("Final!");
                else
                    printf("%d", i);
                return 0;
            }
            if (g[i][j]==l || g[i][j+1]==l)
                g[i+1].pb(l);
            else if (g[i][j]==r || g[i][j+1]==r)
                g[i+1].pb(r);
            else
                g[i+1].pb(g[i][j]);
        }
    }
    return 0;
}
