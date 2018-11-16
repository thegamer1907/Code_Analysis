#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, ones = 0, best = 0;
    cin >> n;
    int flips[1000] = {0};
    for(int i = 0; i != n; i++) {
        cin >> flips[i];
        if(flips[i] == 1) {
            ones++;
            flips[i] = -1;
        }
        else flips[i] = 1;
    }

    int max_curr = flips[0], max_global = flips[0];

    for(int i = 1; i != n; i++) {
        max_curr = max(flips[i], max_curr + flips[i]);
        max_global = max(max_global, max_curr);
    }
    cout << ones + max_global;

    return 0;
}
