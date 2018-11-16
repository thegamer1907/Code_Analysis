#include <map>
#include <cstdio>
#include <iostream>

using namespace std;

int i,n,R,a[2010];

int dfs(int i)
{
    if (a[i]==-1) return 1;
    else return 1 + dfs(a[i]);
}

int main()
{
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=n;i++) R=max(R,dfs(i));
    cout<<R<<endl;
}
