#include <cstdio>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <set>

using namespace std;

const long long MOD = 1000000007LL;

void fillout(int p, bool *looked, vector<int> *mas, int *out, int &timer) {
    looked[p] = true;
    for (int i = 0; i < mas[p].size(); ++i) {
        if (!looked[mas[p][i]]) {
            fillout(mas[p][i], looked, mas, out, timer);
        }
    }
    out[p] = ++timer;
}

void quick_sort(int *out, int *id, int a, int b) {
    int x = out[rand() % (b - a + 1) + a], i = a, j = b;
    do {
        while (out[i] > x) {
            ++i;
        }
        while (x > out[j]) {
            --j;
        }
        if (i <= j) {
            swap(out[i], out[j]);
            swap(id[i], id[j]);
            ++i;
            --j;
        }
    } while (i <= j);
    if (i < b) {
        quick_sort(out, id, i, b);
    }
    if (a < j) {
        quick_sort(out, id, a, j);
    }
}

void onemore(int p, bool *looked, vector<int> *mas, vector<int> &vec) {
    looked[p] = true;
    vec.push_back(p);
    for (int i = 0; i < mas[p].size(); ++i) {
        if (!looked[mas[p][i]]) {
            onemore(mas[p][i], looked, mas, vec);
        }
    }
}

int main() {
    srand(time(0));
    int n, m, a, b;
    scanf("%d", &n);
    long long *c = new long long[n], ansv = 0LL, ansc = 1LL;
    bool *looked = new bool[n];
    int *out = new int[n], timer = -1, *id = new int[n];
    for (int i = 0; i < n; ++i) {
        scanf("%I64d", &c[i]);
        looked[i] = false;
        id[i] = i;
    }
    scanf("%d", &m);
    vector<int> *mas = new vector<int>[n], *inv = new vector<int>[n];
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        --a; --b;
        mas[a].push_back(b);
        inv[b].push_back(a);
    }
    for (int i = 0; i < n; ++i) {
        if (!looked[i]) {
            fillout(i, looked, mas, out, timer);
        }
    }
    for (int i = 0; i < n; ++i) {
        looked[i] = false;
    }
    quick_sort(out, id, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        if (!looked[id[i]]) {
            vector<int> vec;
            onemore(id[i], looked, inv, vec);
            long long mmax = 1000000000000000000LL, col = 0LL;
            for (int j = 0; j < vec.size(); ++j) {
                if (c[vec[j]] < mmax) {
                    mmax = c[vec[j]];
                }
            }
            for (int j = 0; j < vec.size(); ++j) {
                if (c[vec[j]] == mmax) {
                    ++col;
                }
            }
            ansv += mmax;
            ansc = (ansc * col) % MOD;
        }
    }
    printf("%I64d %I64d\n", ansv, ansc);
    return 0;
}
