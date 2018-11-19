#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;
#define INF 0x3f3f3f3f
#define LC(x) (x<<1)
#define RC(x) ((x<<1)+1)
#define MID(x,y) ((x+y)>>1)
#define fin(name) freopen(name,"r",stdin)
#define fout(name) freopen(name,"w",stdout)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
typedef pair<int,int> pii;
typedef long long LL;
const double PI=acos(-1.0);
const int N = 10;
char s[N],t[220][N];

int main(void)
{
    int i,j;
    while (~scanf("%s",s))
    {
        int n;
        scanf("%d",&n);
        for (int i=0; i<n; ++i)
        {
            scanf("%s",t[i]);
        }
        int flag = 0;
        for (i=0; i<n; ++i)
        {
            if(strcmp(s,t[i])==0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            puts("YES");
        else
        {
            for (i=0; i<n; ++i)
                strcpy(t[i+n],t[i]);
            for (i=0; i<n*2; ++i)
            {
                for (j=0; j<n*2; ++j)
                {
                    if(i==j)
                        continue;
                    if((t[i][1]==s[0]&&t[j][0]==s[1] && i < j)||(t[j][1]==s[0]&&t[i][0]==s[1] &&j < i))
                    {
                        flag=1;
                        break;
                    }
                }
            }
            puts(flag?"YES":"NO");
        }
    }
    return 0;
}
