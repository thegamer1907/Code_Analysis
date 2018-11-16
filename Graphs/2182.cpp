#include <iostream>
#include <queue>
using namespace std;
int vis[20010];

int main()
{
    int N, M;
    cin >> N >> M;
    if (M <= N) {
        cout << N - M;
        return 0;
    }

    queue<int> q;
    q.push(N);
    vis[N] = true;
    int d = -1;
    while (!q.empty()) {
        d++;
        int sz = q.size();
        while (sz--) {
            int u = q.front();
            if (u == M) {
                cout << d;
                return 0;
            }
            q.pop();
            int v = 2 * u;
            if (u < M && !vis[v]) {
                vis[v] = true;
                q.push(v);
            }
            v = u - 1;
            if (v > 0 && !vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}