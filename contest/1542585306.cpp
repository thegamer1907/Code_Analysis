#include <bits/stdc++.h>

using namespace std;


int tem[51];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int mask = 0;
        for (int j = 0; j < k; j++) {
            mask *= 2;
            int x; scanf("%d", &x);
            mask += x;
        }
        tem[mask]++;
    }
    if(tem[0]) {
        cout << "YES\n";
        return 0;
    } else {
        for (int i = 0; i < 16; i++) {
            if(__builtin_popcount(i) == 1) {
                if(tem[i]) {
                    int falta = -1;
                    for (int j = 0; j < 4; j++) if(i & (1 << j)) falta = j;
                    for (int j = 0; j < 16; j++) {
                        if(tem[j] && !(j & (1 << falta))) {
                            cout << "YES\n";
                            return 0;
                        }
                    }
                }
            }
        }
        // SO TEM COM 2 AGORA
        for (int i = 0; i < 16; i++) {
            if(__builtin_popcount(i) == 2) {
                int rev = (1 << 4) - 1;
                rev ^= i;
                if(tem[rev] && tem[i]) {
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}
