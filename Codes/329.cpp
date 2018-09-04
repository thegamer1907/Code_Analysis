#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> x;
    x.push_back(1);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        x.push_back(x.back() + a);
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int q;
        scanf("%d", &q);
        printf("%d\n", upper_bound(x.begin(), x.end(), q) - x.begin());
    }

    return 0;
}
