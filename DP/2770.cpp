#include <bits/stdc++.h>

using namespace std;

int n;
int t, a[10];
vector<int> v;

int main() {
    scanf("%d", &n);
    do a[++t] = n % 10;
    while (n /= 10);
    for (int x = 0; ; ) {
        x = 0;
        for (int i = t; i; --i) {
            x = x * 10;
            if (a[i]) {
                ++x;
                --a[i];
            }
        }
        if (x) v.push_back(x);
        else break;
    }
    printf("%d\n", (int)v.size());
    for (int x : v)
        printf("%d ", x);
    puts("");
    return 0;
}