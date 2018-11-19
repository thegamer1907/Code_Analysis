#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    vector<pair<double, bool>> times;
    times.push_back({h, true});
    times.push_back({12 * m / 60.0, true});
    times.push_back({12 * s / 60.0, true});
    times.push_back({t1, false});
    times.push_back({t2, false});
    sort(times.begin(), times.end());
    bool can = false;
    for(int i = 0; i < 5; i++) {
        can |= !times[i].second && !times[(i+1)%5].second;
    }
    cout << (can ? "YES" : "NO") << endl;
    return 0;
}
