#include <iostream>
#include <vector>
using namespace std;
vector <int> v[30000];
int used[30000];
void dfs(int x)
{
    used[x]=1;
    for(int i=0;i<v[x].size();i++)
    {
        if(used[v[x][i]]==0)
            dfs(v[x][i]);
    }
}
int main()
{
    int n,t,p;
    cin >> n >> t;
    for(int i=0;i<n-1;i++)
    {
        cin >> p;
        v[i].push_back(p+i);
    }
    dfs(0);
    if(used[t-1])
        cout << "YES";
    else
        cout << "NO";
}
