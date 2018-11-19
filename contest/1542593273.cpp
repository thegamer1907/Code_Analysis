#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#define  ll long long
using namespace std;

char s[10];
char s1[105][10];

int main()
{
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int ok=0;
    for(int i=1;i<=n;i++)
        scanf("%s",s1[i]);
    for(int i=1;i<=n;i++)
    {
        if(s1[i][0]==s[0]&&s1[i][1]==s[1])
            ok=1;
        if(s1[i][1]==s[0])
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[j][0]==s[1])
                    ok=1;
            }
        }
    }
    if(ok==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
