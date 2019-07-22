#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    long long m;
    cin >> n >> m >> k;

    long long* arr = new long long[m];
    for (long long i = 0; i < m; ++i) cin >> arr[i];

    long long operation = 0, i = 0, sur = 0;
    while (i < m) {
        long long right = ((arr[i]-sur-1)/k + 1)*k+sur;
        while (i < m && arr[i]<=right) {
            ++i;
            ++sur;
        }
        ++operation;
    }

    cout << operation << endl;
    delete[] arr;

    return 0;
}