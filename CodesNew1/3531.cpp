#include <set>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

const int N = 100 + 13;

int n, m;
int a[N];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans2 = *max_element(a, a + n) + m;
    for (int it = 0; it < m; it++) {
        int pos = -1;
        for (int i = 0; i < n; i++) {
            if (pos == -1 || a[i] < a[pos]) {
                pos = i;
            }
        }
        assert(pos != -1);
        a[pos]++;
    }
    int ans1 = *max_element(a, a + n);
    cout << ans1 << ' ' << ans2 << endl;
}