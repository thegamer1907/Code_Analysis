#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> num(n);
    vector<pair<long long, int>> ans(n);

    for (long long i = 0; i < n; ++i) {
        cin >> num[i];
        long long temp;
        if (num[i] <= i) {
            ans[i] = {i, i};
        } else {
            temp = (max(num[i] - i, (long long) 0) / n);
            if((num[i] - i) % n != 0) {
                temp += 1;
            }
            ans[i] = {temp * n + i, i};
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans[0].second + 1;

    return 0;
}