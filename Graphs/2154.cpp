#include <bits/stdc++.h>

using namespace std;

int m, a[20004] = {0};

int bfs(int n, int step)
{
    if (a[n] < step && a[n] > 0) return INT_MAX;
    else a[n] = step;

    if (n == m) return a[n];

    int s = INT_MAX;
    if (n > 0) s = min(bfs(n-1, step+1), s);
    if (n < m) s = min(bfs(n*2, step+1), s);
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n >> m;
    cout << bfs(n,0);

    return 0;
}
