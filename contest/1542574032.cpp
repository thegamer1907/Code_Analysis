#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> c(1<<k);
    for (int i = 0; i < n; i++) {
        int msk = 0;
        for (int j = 0; j < k; j++) {
            int code;
            scanf("%d", &code);
            msk += (1<<j)*code;
        }
        c[msk]++;
    }

    bool ans = false;
    for (int i = 0; i < c.size(); i++) {
        ans |= c[i] > 0 && i == 0;

        for (int j = i+1; j < c.size(); j++) {
            if (c[i] > 0 && c[j] > 0) {
                bool ok = true;
                for (int bt = 0; bt < k; bt++) {
                    int msk = 1<<bt;
                    if ((i&msk) && (j&msk)) {
                        //cout << i << " " << j << endl;
                        ok = false;
                    }
                }
                if (ok) {
                    ans = true;
                }
            }
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
}