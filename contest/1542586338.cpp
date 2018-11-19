#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <cassert>

using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

    int n;
    string s;

    cin >> s >> n;
    vector<string> v(n);

    for (size_t i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if ((v[i] + v[j]).find(s) != string::npos) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}
