#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

const long long INF = 1000000000000000000LL;

struct node {
    int a;
    long long w;
    node() {}
    node(int a, long long w) {
        this->a = a;
        this->w = w;
    }
};

class Comp {
public:
    bool operator() (node const& n1, node const& n2) const {
        return ((n1.w > n2.w) || ((n1.w == n2.w) && (n1.a > n2.a)));
    }
};

int main() {
    int n, m, a, b;
    long long w;
    scanf("%d%d", &n, &m);
    vector<node> *mas = new vector<node>[n];
    for (int i = 0; i < m; ++i) {
        scanf("%d%d%I64d", &a, &b, &w);
        --a; --b;
        mas[a].push_back(node(b, w));
        mas[b].push_back(node(a, w));
    }
    priority_queue<node, vector<node>, Comp> cont;
    long long *dist = new long long[n];
    int *pre = new int[n];
    for (int i = 0; i < n; ++i) {
        dist[i] = INF;
        pre[i] = -1;
    }
    dist[0] = 0LL;
    cont.push(node(0, 0LL));
    while (cont.size()) {
        a = cont.top().a;
        w = cont.top().w;
        cont.pop();
        if (dist[a] != w) {
            continue;
        }
        for (int i = 0; i < mas[a].size(); ++i) {
            if (w + mas[a][i].w < dist[mas[a][i].a]) {
                dist[mas[a][i].a] = w + mas[a][i].w;
                pre[mas[a][i].a] = a;
                cont.push(node(mas[a][i].a, dist[mas[a][i].a]));
            }
        }
    }
    if (pre[n - 1] == -1) {
        printf("%d\n", -1);
    }
    else {
        vector<int> ans;
        a = n - 1;
        while (a != -1) {
            ans.push_back(a + 1);
            a = pre[a];
        }
        for (int i = ans.size() - 1; i >= 0; --i) {
            printf("%d ", ans[i]);
        }
    }
    return 0;
}
