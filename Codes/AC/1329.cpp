#include <bits/stdc++.h>
using namespace std;
typedef long long ull;
const int maxn=1e5+10;
set<string> ss;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;
        ss.insert(t);
    }
    int tot=0;
    for(int i=0;i<m;i++)
    {
        string t;
        cin>>t;
        if(ss.count(t))    ++tot;
    }
    n-=tot,m-=tot;
    if(tot&1)    n+=1;
    if(n<=m)    printf("NO\n");
    else    printf("YES\n");
    return 0;
}