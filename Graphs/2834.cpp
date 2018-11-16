#include <cstdio>
#include <vector>

using namespace std;

long long mmax(long long a, long long b) {
    if (a > b) {
        return a;
    }
    return b;
}

struct node {
    int a;
    long long b;
    node() {}
    node(int a, long long b) {
        this->a = a;
        this->b = b;
    }
};

int cnt(int p, int from, vector<node> *mas) {
    int ans = 1;
    for (int i = 0; i < mas[p].size(); ++i) {
        if (mas[p][i].a != from) {
            ans += cnt(mas[p][i].a, p, mas);
        }
    }
    return ans;
}

int dfs(int p, int from, vector<node> *mas, long long *arr, long long now) {
    if (now > arr[p]) {
        return cnt(p, from, mas);
    }
    int ans = 0;
    for (int i = 0; i < mas[p].size(); ++i) {
        if (mas[p][i].a != from) {
            ans += dfs(mas[p][i].a, p, mas, arr, mmax(0LL, now + mas[p][i].b));
        }
    }
    return ans;
}

int main() {
    int n, a;
    scanf("%d", &n);
    long long *arr = new long long[n], b;
    for (int i = 0; i < n; ++i) {
        scanf("%I64d", &arr[i]);
    }
    vector<node> *mas = new vector<node>[n];
    for (int i = 1; i < n; ++i) {
        scanf("%d%I64d", &a, &b);
        --a;
        mas[i].push_back(node(a, b));
        mas[a].push_back(node(i, b));
    }
    printf("%d\n", dfs(0, -1, mas, arr, 0LL));
    return 0;
}
