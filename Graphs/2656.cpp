// Example program
#include <bits/stdc++.h>

using namespace std;

#define PB push_back

typedef long long int ll;

const int MAXN = 1e4 + 10;

bool mark[MAXN];

vector <int> v[MAXN];

void DFS(int x)
{
    mark[x] = true;
    for (auto i:v[x])
    {
        if (mark[i])
            continue;
        DFS(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fill(mark, mark + MAXN, false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].PB(i);
        v[i].PB(x);
    }
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mark[i])
            continue;
        DFS(i);
        t++;
    }
    cout << t;
}
