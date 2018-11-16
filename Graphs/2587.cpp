// IN THE NAME OF GOD
// O30 Takdast bia      hala bimax bia
// ba ye darbast bia    ba barobax bia
// sari o fast bia      hala barax bia

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define PB push_back
#define PP pop_back
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define I insert
#define E erase
#define B back

const int MAXN = 1e5 + 100;
const int N = 1e6 + 100;
const ll INF = 1e18;
const ll mod = 1e9 + 9;
const ll hashh = 311;

vector <int> v[MAXN];
int a[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].PB(i);
    }
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    queue <pii> q;
    q.push({1, 0});
    int cnt = 0;
    while (!q.empty())
    {
        pii x = q.front();
        q.pop();
        for (auto i:v[x.F])
            q.push({i, a[x.F]});
        if (a[x.F] != x.S)
            cnt++;
    }
    cout << cnt;
}
