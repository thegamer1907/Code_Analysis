#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, maxa = 0, a, suma = 0;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        maxa = max(maxa, a);
        suma += a;
    }
    cout << max((suma + m - 1) / n + 1, maxa) << ' ' << maxa + m;
}
