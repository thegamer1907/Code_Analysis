#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, ones = 0, best = 0;
    cin >> n;
    int flips[1000] = {0};
    for(int i = 0; i != n; i++) {
        cin >> flips[i];
        if(flips[i] == 1) ones++;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j != n+1-i; j++) {
            int int_ones = 0;
            for(int k = 0; k < i; k++) if(flips[j+k] == 1) int_ones++;
            best = max(best, ones-int_ones + i-int_ones);
        }
    }
    cout << best;

    return 0;
}
