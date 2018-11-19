#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define uint unsigned int

void yes() {
    puts("YES");
    exit(0);
}

void no() {
    puts("NO");
    exit(0);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    vector<vector<int>> dif(n, vector<int>(k));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            scanf("%d", &dif[i][j]);
        }
    }

    int sz = 1 << k;
    vector<int> have(sz);

    for (int i = 0; i < n; ++i) {
        uint mask = 0;
        for (int j = 0; j < k; ++j) {
            if (dif[i][j] == 1) {
                mask |= (1 << j);
            }
        }
        ++have[mask];
    }

    // for (uint i = 0; i < sz; ++i) {
    //     printf("%d\n", have[i]);
    // }

    if (have[0] > 0) {
        yes();
    }

    if (k == 1) {
        no();
    }

    for (uint i = 0; i < sz; ++i) {
        for (uint j = i + 1; j < sz; ++j) {
            if ((i & j) == 0 && have[i] > 0 && have[j] > 0) {
                yes();
            }
        }
    }

    no();

    return 0;
}
