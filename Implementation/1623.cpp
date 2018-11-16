#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include <iomanip>
#include<cmath>
#include<stack>
#include <algorithm>
#include<cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char a[110];
    int vis[110];
    memset(vis,1,sizeof(vis));
    int l;
    int i;
    scanf("%s",a);
    l=strlen(a);
    for(i=1; i<l; i++)
    {
        vis[0]=1;
        if(a[i]==a[i-1])
            vis[i]=vis[i-1]+1;
        else
            vis[i]=1;
        if(vis[i]==7)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
