#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
string s[110];
string x;
bool hehe(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        if(s[i][0]==x[0]&&s[i][1]==x[1]) return 1;
        for(j=1; j<=n; j++)
        {
            if(s[i][1]==x[0]&&s[j][0]==x[1])
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
        cin>>s[i];
    int tmp=hehe(n);
    if(tmp)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
