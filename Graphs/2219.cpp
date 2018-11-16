#include <cstdio>
#include <vector>

using namespace std;

void dfs(int p, int from, vector<int> *mas, int now, int &ans) {
    if (now > ans) {
        ans = now;
    }
    for (int i = 0; i < mas[p].size(); ++i) {
        if (from != mas[p][i]) {
            dfs(mas[p][i], p, mas, now + 1, ans);
        }
    }
}

int main() {
    int n, a, ans = -1;
    scanf("%d", &n);
    vector<int> *mas = new vector<int>[n];
    bool *root = new bool[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        if (a != -1) {
            root[i] = false;
            mas[a - 1].push_back(i);
        }
        else {
            root[i] = true;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (root[i]) {
            dfs(i, -1, mas, 1, ans);
        }
    }
    printf("%d\n", ans);
    return 0;
}
