#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair

const int N=1000,M=20000,inf=0x3f3f3f3f;
const double eps=1e-9;
const double pi =acos(-1.0);
const ll mod = 1e9+7;

char s[110][5];

int main()
{
    while(~scanf("%s",s[0]))
    {
        int n;
        scanf("%d",&n);
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%s",s[i]);
            if(s[i][0]==s[0][0]&&s[i][1]==s[0][1])flag=1;
        }
        if(flag)
            puts("YES");
        else
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(s[i][1]==s[0][0]&&s[j][0]==s[0][1])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag)break;
            }
            if(flag)
            puts("YES");
            else puts("NO");
        }
    }
}
