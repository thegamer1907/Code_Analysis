#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <random>
#include <set>
#include <stack>

#define ll unsigned long long
#define p(a, b) pair<a,b>

using namespace std;

//ifstream cin("Input.txt");
//ofstream cout("Output.txt");

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int64_t n, t;
    cin >> n >> t;
    vector<int64_t> v;
    int mx = 0;
    int sum = 0;
    int l = 0;
    int ans = 0;
    for (int64_t i = 0; i < n; ++i) {
        int64_t x;
        cin >> x;
        v.push_back(x);
        sum += x;
        ans++;
        while (l <= i && sum > t) {
            sum -= v[l++];
            ans--;
        }

        mx = max(mx, ans);
    }
    cout << mx;
    return 0;
}