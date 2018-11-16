#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
typedef long long ll;

const int N=1e4+4;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

vector <int> edge[N];
vector <int> d[N];
int depth[N],color[N],nowcolor[N];

void dfs(int u,int dep){
    depth[u]=dep;
    for(int i=0;i<(int)edge[u].size();i++){
        int v=edge[u][i];
        dfs(v,dep+1);
    }
}

void dfs1(int c,int v){
    for(int i=0;i<(int)edge[v].size();i++){
        int u=edge[v][i];
        if(nowcolor[u]==c)  continue;
        nowcolor[u]=c;
        dfs1(c,u);
    }
}

int main(void){
    int n,ans=0;
    cin >> n;
    for(int i=2,f;i<=n;i++){
        scanf("%d",&f);
        edge[f].push_back(i);
    }
    dfs(1,1);
    int mx=-1;
    for(int i=1;i<=n;i++)   mx=max(mx,depth[i]);
    for(int i=1;i<=n;i++)   d[depth[i]].push_back(i);
    for(int i=1;i<=n;i++)   scanf("%d",&color[i]);
    for(int i=1;i<=mx;i++){/// depth is i
        for(int j=0;j<d[i].size();j++){
            int v=d[i][j];
            if(nowcolor[v]==color[v])   continue;
            else{
                ans++;
                nowcolor[v]=color[v];
                dfs1(color[v],v);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
/**************

**************/
