/*   You have lost, my dear   */
/*   Viva forever   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
long long n,m;
int v[100002];
set<int>s[100005];
set<int>is;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        cin>>v[i],is.insert(v[i]);
    for(int i=1;i<=m;++i)
    {
        int a,b;
        cin>>a>>b;
        if(v[a]!=v[b])
            s[v[a]].insert(v[b]),s[v[b]].insert(v[a]);
    }
    int mx=-1,who=0;
    for(int i=1;i<=100000;++i)
    {
        if(is.find(i)==is.end())
            continue;
        int g=s[i].size();
        if(g>mx)
            mx=max(mx,g),who=i;
    }
    cout<<who;
    return 0;
}
