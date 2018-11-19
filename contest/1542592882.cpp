#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <queue>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
const int mod = 1000000007;

int n,m,q;

char s[200][2];
bool ok[2]={0};
int main()
{
#ifdef local
    freopen("data","r",stdin);
#endif

    scanf("%s%d",s[0],&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[1]);
        if(s[1][0]==s[0][0]&&s[1][1]==s[0][1]) ok[0]=ok[1]=1;
        if(s[1][0]==s[0][1]) ok[1]=1;
        if(s[1][1]==s[0][0]) ok[0]=1;
    }
    if(ok[0]&&ok[1]) puts("YES");
    else puts("NO");
}
