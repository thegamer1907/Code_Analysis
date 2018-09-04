#include<bits/stdc++.h>
#define LL long long
using namespace std;
typedef pair<int, int> pii;
const int maxn = 1e5 + 10;
set<pii> Set;
vector<int> v[maxn];

int n, m, k, mx[maxn], pre[maxn];

int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            int x;
            scanf("%d", &x);
            v[j].push_back(x);
        }
    }

    for(int i = 0; i < m; i ++) {
        int cur = 0;
        v[i].push_back(-1);
        while(cur < n) {
            int st = cur;
            while(cur < n && v[i][cur] <= v[i][cur + 1])
                cur ++;
            for(int j = st; j <= cur; j ++)
                mx[j] = max(mx[j], cur);
            cur ++;
        }
    }

    pre[0] = mx[0];
    for(int i = 1; i < n; i ++)
        pre[i] = max(pre[i - 1], mx[i]);

    scanf("%d", &k);
    while(k --) {
        int l, r;
        scanf("%d%d", &l, &r);
        l --, r --;
        puts(mx[l] >= r ? "Yes" : "No");
    }

    return 0;
}
