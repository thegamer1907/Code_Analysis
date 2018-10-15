#include <cstdio>
#include <cstring>
#include <queue>
#include <cmath>
#include <algorithm>
#include <set>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>
#define  pi acos(-1.0)
#define  eps 1e-6
#define  fi first
#define  se second
#define  lson l,m,rt<<1
#define  rson m+1,r,rt<<1|1
#define  bug         printf("******\n")
#define  mem(a,b)    memset(a,b,sizeof(a))
#define  fuck(x)     cout<<"["<<"x="<<x<<"]"<<endl
#define  f(a)        a*a
#define  sf(n)       scanf("%d", &n)
#define  sff(a,b)    scanf("%d %d", &a, &b)
#define  sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define  sffff(a,b,c,d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define  FIN         freopen("DATA.txt","r",stdin)
#define  gcd(a,b)    __gcd(a,b)
#define  lowbit(x)   x&-x
#pragma  comment (linker,"/STACK:102400000,102400000")
using namespace std;
typedef long long  LL;
typedef unsigned long long ULL;
const int INF = 0x7fffffff;
const LL  INFLL = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9 + 7;
const int maxn = 5e5 + 10;
int n;
string s[maxn], ans[maxn];
int main() {
    sf(n);
    for (int i = 0 ; i < n ; i++) cin >> s[i];
    ans[n - 1] = s[n - 1];
    for (int i = n - 1 ; i > 0 ; i--) {
       // fuck(ans[i]);
        if (ans[i] < s[i - 1]) {
            int len1 = ans[i].size(), len2 = s[i - 1].size();
            int len = min(len1, len2);
            int j;
            for (j = 0 ; j < len ; j++) if (ans[i][j] < s[i - 1][j])   break;
            for (int k = 0 ; k < j ; k++) ans[i - 1] += s[i - 1][k];
        }else ans[i-1]=s[i-1];
    }
    for (int i = 0 ; i < n ; i++)
        cout << ans[i] << endl;
    return 0;
}
