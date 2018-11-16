#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


int n, m;

using ll = long long;
using ii = std::pair<int, int>;
using i3 = std::pair<ii, ii>;

struct Edge {
    int a, b, w;
};

const int MAXM = 128*1024;
const int MAXN = 128*1024;
const ll MAXW = 1000001;
Edge edges[MAXM*2];

ll best[MAXN];
int prevv[MAXN];

Edge* ebegin[MAXN];
Edge* eend[MAXN];

std::vector<int> solve()
{
    std::sort(edges, edges+2*m, [](const Edge& a, const Edge& b){
        if (a.a != b.a) return a.a < b.a;
        return a.b < b.b;
    });
    Edge* f = edges;
    for (int i=1; i<=n; i++) {
        ebegin[i] = f;
        while (f < edges + m + m && f->a == i) f++;
        eend[i] = f;
        best[i] = -1;
    }
    prevv[n] = 0;
    using St = std::pair<ll, int>;
    std::set<St> S;
    best[1] = 0;
    S.insert({0, 1});
    while (!S.empty()) {
        auto front = *S.begin();
        ll dist = front.first;
        int v = front.second;
        S.erase(S.begin());
        for (auto it=ebegin[v]; it != eend[v]; it++) {
            int tg = it->b;
            ll tdis = dist + it->w;
            if (best[tg] == -1 || tdis < best[tg]) {
                if (best[tg] != -1) {
                    S.erase({tg, best[tg]});
                }
                best[tg] = tdis;
                prevv[tg] = v;
                S.insert({tdis, tg});
            }
        }
    }
    std::vector<int> ans;
    if (prevv[n]) {
        int v = n;
        while (v != 1) {
            ans.push_back(v);
            v = prevv[v];
        }
        ans.push_back(1);
        std::reverse(ans.begin(), ans.end());
    }
    return ans;
}

int main()
{
    std::ios::sync_with_stdio(false);
    while (std::cin >> n >> m) {
        for (int i=0; i<m; i++) {
            int a, b, w;
            std::cin >> a >> b >> w;
            edges[i] = {a, b, w};
            edges[i+m] = {b, a, w};
        }
        auto ans = solve();
        if (ans.empty()) {
            std::cout << "-1\n";
        } else {
            bool first = true;
            for (auto v : ans) {
                if (!first) std::cout << " ";
                std::cout << v;
                first = false;
            }
            std::cout << "\n";
        }
    }
}
