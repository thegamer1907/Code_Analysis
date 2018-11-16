#include <bits/stdc++.h>
using namespace std;
int const N = 1e6+9;

bool f[N];
int n,t;
vector < vector <int> > a(N);
void dfs (int x)
{
    f[x]=true; if (f[t]) return;
    for (int i=0;i<a[x].size();i++)
    {
        int v = a[x][i];
        if (!f[v]) dfs(v);
        if (f[t]) return;
    }
}

int main ()
{
    scanf("%d%d",&n,&t);
    memset(f,false,sizeof(f));
    for (int i=1;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[i].push_back(x+i);
    }
    dfs(1);
    if (f[t]) cout<<"YES"; else cout<<"NO";

    return 0;
}
