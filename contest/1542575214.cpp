#include<iostream>
#include<algorithm>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<assert.h>
#include<queue>
#include<stack>
#include<string>
#define fi first
#define se second
#define lson l,mid,o<<1
#define rson mid+1,r,o<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int, int> P;
typedef pair<P, P> PII;
const LL INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
const LL mod = 1e9 + 7;
const double PI = acos(-1);

bool vis[20];
int main() {
    int n, k, s, x;
    scanf("%d%d", &n, &k);
    memset(vis, false, sizeof(vis));
    bool flag = false;
    for(int i = 1; i <= n; ++i){
        s = 0;
        for(int j = 1; j <= k; ++j) scanf("%d", &x), s = s * 2 + x;
        vis[s] = true;
    }
    if(vis[0])  flag = true;
    int u = (1 << k) - 1;
    for(int i = 1; i < u; ++i){
        for(int j = 1; j < u; ++j){
            if((i & j) == 0 && vis[i] && vis[j])    flag = true;
        }
    }
    if(flag)    puts("YES");
    else    puts("NO");
	return 0;
}
