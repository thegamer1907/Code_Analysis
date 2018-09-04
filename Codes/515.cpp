#include <iostream>
using namespace std;
const int maxn = 10000;

int k, r = 0, f[maxn+10];

bool check(int a) {
    return f[a / maxn] + f[a % maxn] == 10;
}

int main() {
    cin >> k;
    for (int i = 1; i < maxn; i ++) {
        f[i] = f[i / 10] + i % 10;
    }
    while (k) {
        k -= check(++r);
    }
    cout << r << endl;
    return 0;
}
