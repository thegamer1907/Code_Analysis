#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    long long minus = 0;
    long long cnt = 0;
    long long curr_room = 0;
    long long i = 0;
    long long to_delete[m];
    for (auto &i: to_delete) {
        cin >> i;
        --i;
    }
    while (i < m) {
        while (to_delete[i] - minus >= (curr_room + 1) * k) {
            long long to_plus = 1;
            while (to_delete[i] - minus + (to_plus << 1) < (curr_room + 1) * k) {
                to_plus <<= 1;
            }
            curr_room += to_plus;
        }
        long long minus_change = 0;
        while (i < m && to_delete[i] - minus < (curr_room + 1) * k) {
            ++i;
            ++minus_change;
        }
        minus += minus_change;
        ++cnt;
    }
    cout << cnt;
    return 0;
}