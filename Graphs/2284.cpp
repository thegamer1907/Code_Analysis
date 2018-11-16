#include<iostream>
#include<vector>

int mxdep = 1;
std::vector<int> v[2001];

void dfs(int rt, int dep)
{
    mxdep = std::max(mxdep, dep);
    for(int i=0;i<v[rt].size();i++)
        dfs(v[rt][i], dep+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1, p;i<=n;i++)
    {
        scanf("%d", &p);
        v[p == -1 ? 0 : p].push_back(i);
    }
    
    dfs(0, 0);

    printf("%d", mxdep);
}
