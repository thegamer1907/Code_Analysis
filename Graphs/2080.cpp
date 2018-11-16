#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define pb push_back
#define ins insert

const double pi = 3.14159265359;
const double eps = 1e-9;
const int mod = 1e9 + 7;
const int mod1 = 1e9 + 9;
const int INF = 1e9;
const ll INFLL = 2e18;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    if(n > m)
    {
        cout << n - m;
        return 0;
    }
    vector<int> d(m * 4 + 1, INF), used(m * 4 + 1);
    d[n] = 0;
    queue<int> q;
    q.push(n);
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        if(v - 1 > 0 && !used[v - 1])
        {
            q.push(v - 1);
            d[v - 1] = d[v] + 1;
            used[v - 1] = true;
        }
        if(v * 2 <= m * 4 + 1 && !used[v * 2])
        {
            q.push(v * 2);
            d[v * 2] = d[v] + 1;
            used[v * 2] = true;
        }
    }
    cout << d[m];
    return 0;
}
