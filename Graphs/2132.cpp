#include <bits/stdc++.h>

using namespace std;

const int N = 2e4 + 5;

int n, m, dist[N];

int main(){
    scanf("%d %d", &n, &m);
    memset(dist, 0x3f, sizeof(dist)); dist[n] = 0;
    queue <int> q; q.push(n);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u * 2 < N && dist[u * 2] > dist[u] + 1) {
            dist[u * 2] = dist[u] + 1;
            q.push(u * 2);
        }

        if (u > 0 && dist[u - 1] > dist[u] + 1) {
            dist[u - 1] = dist[u] + 1;
            q.push(u - 1);
        }
    }

    printf("%d", dist[m]);
    return 0;
}
