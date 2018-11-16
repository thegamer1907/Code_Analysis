#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>V[30001];
queue<int>Q;
int s[30002];
int printPath(int parent[], int j);
void solve(int n, int t)
{
    int parent[n+1];
    for(int i=1; i<=n; i++)
    {
        parent[i] = -1;
    }
    Q.push(1);
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<V[u].size(); i++)
        {
            if(printPath(parent,u)== 1)
            {
                parent[V[u][i]] = u;
            }
            Q.push(V[u][i]);
        }
    }

    if(printPath(parent,t)==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int printPath(int parent[], int j)
{
    if(parent[j]==-1)
    {
        if(j==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    printPath(parent,parent[j]);
}

int main()
{
    int n,t,x=0;
    cin >> n >> t;
    for(int i=1; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=1; i<n; i++)
    {
        x = s[i]+i;
        V[i].push_back(x);
    }
    solve(n,t);
    return 0;
}
