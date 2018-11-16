#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MAX = 10004;
bool vis[MAX];

int bfs(int s, int target) {
    queue<int> q;
    q.push(s);
    int level = 0;
    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            int fr = q.front();
            q.pop();
            if (fr == target)
                return level;

            if (fr * 2 <= MAX && !vis[fr * 2]) {
                q.push(fr * 2);
                vis[fr * 2] = true;
            }
            if ( fr && !vis[fr - 1]) {
                q.push(fr - 1);
                vis[fr - 1] = true;
            }
        }
        level++;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif

    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", bfs(n, m));

    return 0;
}