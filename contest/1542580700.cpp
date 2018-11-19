//2017-10-05-16.16
//C

#include <bits/stdc++.h>
using namespace std;

int a[100100];
set<int> s;
int main() {
    int n, k, t, p;
    cin >> n >> k;
    int m = (1 << k + 1) - 1;
    for (int i = 0; i < n; i++) {
        p = 0;
        for (int j = 0; j < k; j++) {
            cin >> t;
            p *= 2;
            p += t;
        }
        if (p == 0) {
            puts("YES");
            return 0;
        }
        int tp = ~p;
        for (int q = 0; q != m; q++) {
            int tt = tp & q;
            if (s.count(tt)) {
                puts("YES");
                return 0;
            }
        }
        s.insert(p);
    }
    puts("NO");
}
