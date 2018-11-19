#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <queue>
#include <algorithm>
#include <vector>
#include <stack>
#define INF 0x3f3f3f3f
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
char s[5];
const int maxn=105;
int n;
char ss[maxn][5];
int main()
{
    scanf("%s", s);
    scanf("%d", &n);
    bool flag=false;
    for(int i=1; i<=n; i++)
    {
        scanf("%s", ss[i]);
        if(!strcmp(ss[i], s))
            flag=true;
    }
    if(flag)
    {
        printf("YES\n");
        return 0;
    }
    bool flag1=false;
    bool flag2=false;
    for(int i=1; i<=n; i++)
        if(ss[i][0]==s[1])
            flag1=true;
    for(int i=1; i<=n; i++)
        if(ss[i][1]==s[0])
            flag2=true;
    if(flag1&&flag2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
