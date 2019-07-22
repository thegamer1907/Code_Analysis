#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+3;
long long arr[N];

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    for (int i=0; i<m; i++) {
        cin >> arr[i];
    }
    int i = 0;
    long long res = 1;
    long long f = (arr[0] - 1) / k * k + 1;
    long long e = f + k - 1;
    while (e < arr[m-1]) {
        //cout << f << ' ' << e << '\n';
        int d = 0;
        while (i + d < m and arr[i+d] <= e)
            d += 1;
        i += d;
        if (d > 0) {
            e += d;
            res += 1;
        }
        else {
            f = e + 1;
            f += (arr[i] - f) / k * k;
            e = f + k - 1;
        }
    }
    cout << res;
}