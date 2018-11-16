#include <bits/stdc++.h>

using namespace std;

#define f cin
#define g cout
#define ll long long
#define pb push_back
#define mp make_pair

const int NMax = 100005;

int n,mx;
int a[NMax],viz[NMax];
vector<int> G[NMax];

void dfs(int nod, int niv){
    viz[nod] = 1;
    mx = max(mx, niv);
    for(int i = 0; i < G[nod].size(); ++i){
        if(!viz[G[nod][i]]){
            dfs(G[nod][i], niv + 1);
        }
    }
}

int main()
{
    f >> n;
    for(int i = 1; i <= n; ++i){
        f >> a[i];
        if(a[i] != -1){
            G[i].push_back(a[i]);
            G[a[i]].push_back(i);
        }
    }
    for(int i = 1; i <= n; ++i){
        if(a[i] == -1){
            dfs(i,0);
        }
    }
    g << mx + 1<< '\n';
    return 0;
}
