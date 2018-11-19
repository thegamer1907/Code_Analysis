#include <cstdio>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;
#define mst(a,b) memset((a),(b),sizeof(a))
#define rush() int T;scanf("%d",&T);while(T--)

typedef long long ll;
const int maxn = 5;
const ll mod = 1e9+7;
const int INF = 0x3f3f3f3f;
const double eps = 1e-9;

char str[maxn];
char s[1005][maxn];

int main()
{
    scanf("%s",str);
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",s[i]);
    }
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(s[i][0]==str[0]&&s[i][1]==str[1])
        {
            flag=1;
            break;
        }
        for(int j=0; j<n; j++)
        {
            if(s[i][1]==str[0]&&s[j][0]==str[1])
            {
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(flag==0) puts("NO");
    else puts("YES");
}
