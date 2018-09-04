#include <cstdio>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int n, d;
vector<pair<int, int>> vct;

int main(void) {
    ios_base::sync_with_stdio(false);

    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        vct.push_back(p);
    }
    sort(vct.begin(), vct.end());
    long long res = vct[0].second;
    for (long long sum = 0, b = 0, e = -1; b < n; ++b) {
        while (e < b || e + 1 < n && vct[e + 1].first - vct[b].first < d) {
            ++e;
            sum += vct[e].second;
        }
        res = max(res, sum);
        sum -= vct[b].second;
    }
    cout << res;
    return 0;
}
