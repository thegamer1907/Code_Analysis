#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) cin >> input[i];
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[input[i] - 1] = i + 1;
    }
    for (auto el : ans) cout << el << " ";
    return 0;
}