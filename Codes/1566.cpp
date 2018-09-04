#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int k;

bool comp(pair<int64_t, int64_t> a, pair<int64_t, int64_t> b) {
    return a.first + a.second * k < b.first + b.second * k;
}

int main() {
    int n;
    int64_t sum;
    cin >> n >> sum;
    vector<pair<int64_t, int64_t>> v(n);
    for (int i = 0; i < v.size(); ++i) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    int l = 0;
    int r = n + 1;
    while(l + 1 < r) {
        k = (r + l) / 2;
        sort(v.begin(), v.end(), comp);
        int64_t temp = 0;
        int i = 0;
        while (temp <= sum && i < k) {
            temp += v[i].first + v[i].second * k;
            ++i;
        }
        if (temp <= sum) {
            l = k;
        } else {
            r = k;
        }
    }
    k = l;
    sort(v.begin(), v.end(), comp);
    sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += v[i].first + v[i].second * k;
    }
    cout << k << " " << sum << endl;
    return 0;
}