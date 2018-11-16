#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m;

    cin >> n;

    vector<int> bs(n);

    for (int i = 0; i < n; i++) {
        cin >> bs[i];
    }

    cin >> m;

    vector<int> gs(m);

    for (int i = 0; i < m; i++) {
        cin >> gs[i];
    }

    sort(bs.begin(), bs.end());
    sort(gs.begin(), gs.end());

    int bp = 0, gp = 0, pairs = 0;

    while (bp < n && gp < m) {
        int bd = bs[bp], gd = gs[gp];
        if (abs(bd - gd) <= 1) {
            pairs++;
            bp++;
            gp++;
        } else if (bd < gd) {
            bp++;
        } else {
            gp++;
        }
    }

    cout << pairs << endl;

    return 0;
}
