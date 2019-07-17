#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    unsigned long long n, k;
    size_t m;
    cin >> n >> m >> k;
    vector<long long> a(m);
    for (size_t i = 0; i < m; ++i) {
        cin >> a[m - i - 1];
    }
    unsigned long long curr = 0, answer = 0, curr1 = 0;
    while (!a.empty()) {
        ++answer;
        if (a.back() > curr + k) {
            curr += ((a.back() - 1 - curr) / k) * k;
        }
        while (!a.empty() && a.back() <= curr + k) {
            a.pop_back();
            curr1 += 1;
        }
        curr += curr1;
        curr1 = 0;
    }
    cout << answer;
}