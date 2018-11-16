#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> s >> m;
    n = s.length();
    int cumulative_sum[100100] = {0};
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) {
            cumulative_sum[i] = 1;
        }
        cumulative_sum[i] += cumulative_sum[i - 1];
    }
    int l, r;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        cout << cumulative_sum[r - 1] - cumulative_sum[l - 1] << endl;
    }
    return 0;
}
