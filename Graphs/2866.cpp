#include <cstdio>
#include <vector>

using namespace std;

void vecdel(vector<int> &vec, int x) {
    int p = 0;
    while (p < vec.size()) {
        if (vec[p] != x) {
            ++p;
        }
        else {
            vec.erase(vec.begin() + p);
            break;
        }
    }
}

void dfs(int p, bool *good, vector<int> *mas) {
    good[p] = false;
    for (int i = 0; i < mas[p].size(); ++i) {
        if (good[mas[p][i]]) {
            dfs(mas[p][i], good, mas);
        }
    }
}

int main() {
    int n, m, a, b, ans = 0;
    scanf("%d%d", &n, &m);
    vector<int> *mas = new vector<int>[n];
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        --a; --b;
        mas[a].push_back(b);
        mas[b].push_back(a);
    }
    int *qu = new int[n], k = 0;
    bool *good = new bool[n];
    for (int i = 0; i < n; ++i) {
        good[i] = true;
        if (mas[i].size() == 1U) {
            qu[k++] = i;
        }
    }
    while (k > 0) {
        if (mas[qu[--k]].size() == 0U) {
            continue;
        }
        int p = mas[qu[k]][0];
        vecdel(mas[p], qu[k]);
        vecdel(mas[qu[k]], p);
        good[qu[k]] = false;
        if (mas[p].size() == 1U) {
            qu[k++] = p;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (good[i] && mas[i].size() > 0U) {
            dfs(i, good, mas);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (good[i]) {
            ++ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}
