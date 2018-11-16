#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100003];
int query[1000003];
int ans[1000003];
set <int> s;
set <int> :: iterator id;
int cnt[1000030];

void init()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=m;i++) cin>>query[i];
}

void solve()
{
    for (int i=n;i>=1;i--)
    {
        cnt[a[i]]++;
        if (cnt[a[i]]==1) s.insert(a[i]);
        
        ans[i]=s.size();
    }

    for (int i=1;i<=m;i++) cout<<ans[query[i]]<<'\n';
}

int main()
{
    init();
    solve();
}