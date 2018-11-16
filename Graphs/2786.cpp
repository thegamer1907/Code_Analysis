#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, m, a, b, p = -1, v = -1;
    scanf("%d%d", &n, &m);
    int *c = new int[n], *qu = new int[n], k = 0;
    vector<int> *cs = (new vector<int>[100000]) - 1;
    vector<int>::iterator it, it2;
    bool *looked = (new bool[100000]) - 1;
    for (int i = 1; i <= 100000; ++i) {
        looked[i] = false;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &c[i]);
        cs[c[i]].push_back(i);
    }
    vector<int> *mas = new vector<int>[n];
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        --a; --b;
        mas[a].push_back(b);
        mas[b].push_back(a);
    }
    for (int i = 1; i <= 100000; ++i) {
        if (cs[i].size()) {
            for (it2 = cs[i].begin(); it2 != cs[i].end(); ++it2)
                for (it = mas[*it2].begin(); it != mas[*it2].end(); ++it) {
                    if (!looked[c[*it]] && c[*it] != i) {
                        looked[c[*it]] = true;
                        qu[k++] = c[*it];
                    }
                }
            if (k > v) {
                p = i;
                v = k;
            }
            while (k > 0) {
                looked[qu[--k]] = false;
            }
        }
    }
    printf("%d\n", p);
    return 0;
}
