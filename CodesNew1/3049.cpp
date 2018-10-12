#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> sum(s.size()+1);
    int t = 0;
    fill(sum.begin(), sum.end(), 0);
    sum[0] = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') t++;
        sum[t]++;
    }
    long long ans = 0;
    for (int i = 0; i + n <= t; i++)
        if (n == 0) ans += (long long)sum[i] * (sum[i] - 1) / 2;
        else ans += (long long)sum[i] * sum[i+n];
    cout << ans << endl;
}
