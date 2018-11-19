#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
using namespace std;
int flag[10010];
string s[110];
string a;
bool solve(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(s[i][0]==a[0]&&s[i][1]==a[1]) return 1;
        for(j=1;j<=n;j++)
        {
            if(s[i][1]==a[0]&&s[j][0]==a[1])
                return 1;
        }
    }
    return 0;
}
int main()
{
    cin>>a;
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        cin>>s[i];
    printf(solve(n)?"YES\n":"NO\n");
    return 0;
}
