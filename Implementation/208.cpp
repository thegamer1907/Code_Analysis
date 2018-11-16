#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdio>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int next() {int x; cin >> x; return x;}

int main() {
    ios_base::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;

    int ac = a;
    a = min(a, b);
    b = max(ac, b);

    bool flag = false;
    int kol = 1;
    while (n > 1) {

        for (int i = 1; i <= n; i+=2) {
            if(i == a && b == i+1) {
                if(n == 2) cout << "Final!";
                else cout << kol;
                return 0;
            }
        }
        kol++;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        n /= 2;
    }
}

/*freopen("input.txt", "r", stdin);
freopen("output.txt, "w", stdout);*/
