#include <bits/stdc++.h>
using namespace std;
int k;

bool check(int x) {
    int res = 0;
    while (x) {
        res += x % 10;
        x /= 10;
    }
    return res == 10;
}

int main() {
    cin >> k;
    int run = 18;
    while (k) {
        run += 1;
        if (check(run)) k--;
    }
    cout << run << endl;
}
