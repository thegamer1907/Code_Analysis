#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long Long;
vector<int> *arr;
int n, q;
const int lim = 1e7 + 2;
int freq[lim], sum[lim];
bool v[lim];
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++freq[x];
    }

    for (int i = 2; i < lim; ++i) {
        if (!v[i]) {
            for (int j = i; j < lim; j += i) {
                v[j] = 1;
                sum[i] += freq[j];
            }
        }
    }
    for (int i = 2; i < lim; ++i) {
        sum[i] += sum[i - 1];
    }
    cin >> q;
    for (int l, r; q--;) {
        cin >> l >> r;
        l = min(l, lim - 1);
        r = min(r, lim - 1);
        printf("%d\n", sum[r] - sum[l - 1]);
    }

    return false & true;
}
