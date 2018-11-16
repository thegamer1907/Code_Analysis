#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, z, answ, count, n, sum = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) cin >> a[i], sum += a[i];
    for (answ = i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (z = i, count = 0; z <= j; z++) {
                if(a[z]) count--;
                else count++;
            }
            answ = max(answ, sum + count);
        }
    }
    cout << answ;
}