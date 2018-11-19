#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pii pair<int, int>
#define mkp make_pair
#define sz(x) ((int)x.size())
#define mem(x, y) memset(x, y, sizeof(x))
#define pb push_back
bool vis[50000];

int main()
{
    int h, m, s, u, v;
    cin >> h >> m >> s >> u >> v;
    h %= 12;
    u %= 12;
    v %= 12;
    vis[s * 720] = 1;
    vis[m * 720 + 12 * s] = 1;
    vis[h * 5 * 720 + 60 * m + s] = 1;
    int a = u * 5 * 720, b = v * 5 * 720;
    if(a > b) swap(a, b);
    bool have = 0;
    for(int i = a; i <= b; i++) have |= vis[i];
    if(!have) {
        puts("YES");
        return 0;
    }
    have = 0;
    for(int i = b; i != a; i = (i + 1) % (60 * 720)) have |= vis[i];
    puts(have ? "NO" : "YES");
    return 0;
}
