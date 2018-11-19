#include <bits/stdc++.h>
using namespace std;

char w[110][10];
string p;
int n, a, b;

int main() {
    cin >> p >> n;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
        if (w[i] == p) {
            a = b = 1;
        }
        if (w[i][1] == p[0]) {
            a = 1;
        }
        if (w[i][0] == p[1]) {
            b = 1;
        }
    }
    if (a == 1 && b == 1) { printf("YES\n"); }
    else { printf("NO\n"); }
    return 0;
}