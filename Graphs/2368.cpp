#include <bits/stdc++.h>

using namespace std;

int Viz[2005], maxim, n;
vector <int> V[2005];

void DFS(int x, int lvl)
{
    if (lvl>maxim)
        maxim=lvl;
    for (int i=0; i<V[x].size(); i++)
    {
        DFS(V[x][i], lvl+1);
    }
}

int main()
{
    int x;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (x==-1)
            x=0;
        V[x].push_back(i);
    }
    DFS(0, 0);
    cout<<maxim;
    return 0;
}
