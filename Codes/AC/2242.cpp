#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define mp make_pair
#define inf 1000000007

vector <vector<int>> g(5005);
bool used[200005];

void dfs(int v)
{
    used[v]=1;
    for (int i=0;i<g[v].size();i++)
        if (!used[g[v][i]]) dfs(g[v][i]);
}

bool check(char c)
{
    if (c=='a'||c=='o'||c=='u'||c=='i'||c=='e') return 1;
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int a[200005];
    map <long long,int> x,y;
    for (int i=0;i<n;i++)
    {cin>>a[i];}
    long long k1=0;
    for (int i=n-1;i>=0;i--)
    {
        k1+=a[i];
        y[k1]=1;
    }
    long long ans=0,k2=0;
    
    for (int i=0;i<n;i++)
    {
        y[k1]=0;
        k2+=a[i];
        k1-=a[i];
        if (y[k2]) ans=max(ans,k2);
    }
    cout<<ans;
}