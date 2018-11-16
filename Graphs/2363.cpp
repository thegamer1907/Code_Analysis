#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int k[2002];
vector <int> v[2002];
vector <int>king;
void bfs(int uu)
{
    for (int i=0; i<v[uu].size(); i++)
    {
        k[v[uu][i]]=k[uu]+1;
        bfs(v[uu][i]);
    }
}
int main()
{
    int n,vv;
    cin>>n;
    for (int i=0; i<2002; i++)
    {
        k[i]=-1;
    }
    for (int i=1; i<n+1; i++)
    {
        cin>>vv;
        if (vv==-1)
        {
            king.push_back(i);
        }
        v[vv].push_back(i);
    }
    int nh=king.size();
    for (int i=0; i<nh; i++)
    {
        k[king[i]]=1;
        bfs(king[i]);
    }
    int maxx=0;
    for (int i=1; i<n+1; i++)
    {
        if (k[i]>maxx)
        {
            maxx=k[i];
        }
    }
    cout<<maxx;
}