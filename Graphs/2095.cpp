#include <bits/stdc++.h>

using namespace std;

#define allof(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define eb emplace_back
#define exists(s, e) (s.find(e)!=s.end())
#define INF 0x3f3f3f3f
#define f first
#define s second
#define endl '\n'
#define watch(x) cout << (#x) << " is " << (x) << endl;

typedef pair<int, int> pii;
typedef long long ll;

const int MAXN = 1e4 + 5;

int n, m;
bool vis[MAXN];

queue<pii> Q;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    cin >> n >> m;

    Q.push({n, 0});
    vis[n] = true;
    while(sz(Q)) {
        pii cur = Q.front();
        Q.pop();
        if(cur.first==m) { cout << cur.second << endl; return 0; }
        if(cur.first*2<=10000 && !vis[cur.first*2]) {
            Q.push({cur.first*2, cur.second+1});
            vis[cur.first*2] = true;
        }
        if(cur.first-1>0 && !vis[cur.first-1]) {
            Q.push({cur.first-1, cur.second+1});
            vis[cur.first-1] = true;
        }
    }

    return 0;

}

