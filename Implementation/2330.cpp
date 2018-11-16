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
    char s[1020];
    int vis[1020];
    vis[0]=0;
    int n;
    scanf("%d%s",&n,s);
     int i=1;
    int ans=0;
    while(s[i]!='\0')
    {
        if(s[i]==s[i-1])
            ans++;
        i++;
    }
   printf("%d\n",ans);
    return 0;
}