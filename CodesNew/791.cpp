#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5+100;
const int inf = 0x7fffffff;
set<string >ans;
int main(void)
{
    string a;
    int n,m;
    scanf("%d %d",&n,&m);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ans.insert(a);
    }
    for(int i=0;i<m;i++)
    {
        cin>>a;
        if(ans.find(a)!=ans.end())
            cnt++;
    }
    n -= cnt/2,m -= (cnt+1)/2;
    if(n>m)
        puts("YES");
    else
        puts("NO");
    return 0;
}