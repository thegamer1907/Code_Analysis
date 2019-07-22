#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    int m;
    cin >> n >> m >> k;

    int* arr = new int[m];
    for (int i = 0; i < m; ++i) cin >> arr[i];

    int operation = 0, i = 0, sur = 0;
    while (i < m) {
        int cur = sur, init = -1;
        while (i < m &&(arr[i]-1-cur)%k > init) {++sur; init = (arr[i]-1-cur)%k; ++i;}
        ++operation;
    }

    cout << operation << endl;
    delete[] arr;

    return 0;
}