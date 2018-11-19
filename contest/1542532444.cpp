#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>

using namespace std;
int n;
char s[10],t[10];
bool flag1,flag2,flag3,flag4;
int main()
{
    scanf("%s",s);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",t);
        if(t[0]==s[0]&&t[1]==s[1]) flag2=1;
        if(t[0]==s[1]) flag3=1;if(t[1]==s[0]) flag4=1;
    }
    if(flag2||(flag3&&flag4)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
