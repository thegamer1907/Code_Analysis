
#include<bits/stdc++.h>
using namespace std;
string str[110];
string x;
bool judge(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        if(str[i][0]==x[0]&&str[i][1]==x[1]) return 1;
        for(j=1; j<=n; j++)
        {
            if(str[i][1]==x[0]&&str[j][0]==x[1])
                return 1;
        }
    }
    return 0;
}
int main()
{
    cin>>x;
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        cin>>str[i];
    int tmp=judge(n);
    if(tmp)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
