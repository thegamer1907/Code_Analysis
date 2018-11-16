#include <cstdio>
#include <vector>

using namespace std;

void dfs(int p, int from, vector<int> *mas, bool *cat, int &ans, int now, int nowmax, int m) {
    if (now > nowmax) {
        nowmax = now;
    }
    for (int i = 0; i < mas[p].size(); ++i) {
        if (mas[p][i] != from) {
            dfs(mas[p][i], p, mas, cat, ans, cat[mas[p][i]] ? now + 1 : 0, nowmax, m);
        }
    }
    if (from != -1 && mas[p].size() == 1 && nowmax <= m) {
        ++ans;
    }
}

int main() {
    int n, m, a, b, ans = 0;
    scanf("%d%d", &n, &m);
    bool *cat = new bool[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        cat[i] = (a == 1);
    }
    vector<int> *mas = new vector<int>[n];
    for (int i = 1; i < n; ++i) {
        scanf("%d%d", &a, &b);
        --a; --b;
        mas[a].push_back(b);
        mas[b].push_back(a);
    }
    dfs(0, -1, mas, cat, ans, cat[0] ? 1 : 0, 0, m);
    printf("%d\n", ans);
    return 0;
}
