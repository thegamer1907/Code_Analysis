#include <bits/stdc++.h>

using namespace std;

string toString(int a) {
    char buf[10]; int i = 0;
    if(a == 0)
        return "0";
    while(a) {
        buf[i++] = (a % 10) + '0';
        a /= 10;
    }
    reverse(buf, buf + i);
    return string(buf, i);
}

long long gcd(long long a, long long b) {
    while(a && b) (a > b ? a %= b : b %= a);
    return a + b;
}

int a[201], b[201];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int j = 0; j < k; ++j)
        cin >> b[j];

    sort(b, b + k, [](int a, int b){
        return a > b;
    });

    int j = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] == 0)
            a[i] = b[j++];
    }

    bool g = false;
    for(int i = 1; i < n; ++i)
        g |= a[i - 1] > a[i];

    cout << (g ? "Yes" : "No");
}