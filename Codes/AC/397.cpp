#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int k = 0, i;
    cin >> k;
    for (i = 19; k > 0; i++) {
        int s = 0, j = i;
        while (j > 0) {
            s += j % 10; j /= 10;
            if (s > 10) break;
        }
        if (s == 10) k--;
        if (k == 0) {
            cout << i << endl;
            return 0;
        }
    }
}

