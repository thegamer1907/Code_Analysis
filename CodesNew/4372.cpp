#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define WATCH(x) cout << (#x) << " is " << (x) << endl

const ll MOD = 1e9 + 7;
const double PI = 2 * acos(0.0);


int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    string arr[n], ans[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (ll i = n - 2; i > -1; i--) {
        bool ok = false;
        for (ll j = 0; j < min(arr[i].size(), arr[i + 1].size()); j++) {
            if (arr[i + 1][j] < arr[i][j] && !ok) {
                while (arr[i].size() != j) {
                    arr[i].pop_back();
                }
                break;
            }
            else if (arr[i + 1][j] > arr[i][j]) {
                ok = true;
            }
            if (j == min(arr[i].size(), arr[i + 1].size()) - 1 && !ok && arr[i].size() > arr[i + 1].size()) {
                arr[i] = arr[i + 1];
            }
        }
    }
    for (auto el : arr) {
        cout << el << "\n";
    }
    return 0;
}
