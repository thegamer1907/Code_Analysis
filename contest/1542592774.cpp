#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mst(a,b) memset((a),(b),sizeof(a))
#define pi acos(-1)
const int INF = 0x3f3f3f3f;
const double eps = 1e-6;
const int MAXN = 1e5 + 10;
const int MAXM = 1e6 + 10;

char s[10];
char a[10];

int main()
{
#ifdef local
    freopen("data","r",stdin);
#endif
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int flag=0;
    int pre_flag=0,suf_flag=0;
    for(int i=0; i<n; i++) {
        scanf("%s",a);
        if(a[0]==s[0]&&a[1]==s[1]) flag=1;
        if(a[0]==s[1]&&a[1]==s[0]) flag=1;
        if(a[0]==s[1]) suf_flag=1;
        if(a[1]==s[0]) pre_flag=1;
    }
    if(suf_flag==1&&pre_flag==1) flag=1;
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}
