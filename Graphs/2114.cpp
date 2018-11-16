#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int n,m,ans; queue<int> q; int dis[100001];
int main() {
    scanf("%d%d",&n,&m);
    memset(dis,0x3f,sizeof dis);
    q.push(n); dis[n] = 0;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        if (cur == m) break;
        if (cur-1 > 0 && dis[cur]+1 < dis[cur-1]) q.push(cur-1),dis[cur-1] = dis[cur]+1;
        if (cur<<1 <= m<<1 && dis[cur]+1 < dis[cur<<1]) q.push(cur<<1),dis[cur<<1] = dis[cur]+1;
    }
    printf("%d\n",dis[m]);
    return 0;
}
