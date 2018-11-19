#include <bits/stdc++.h>

using namespace std;

#define double long double
#define ll long long
#define uint unsigned int

void yes() {
    cout << "YES\n";
    exit(0);
}

int main() {
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    if (h == 12) {
        h = 0;
    }

    double deg1 = h * 360 / 12 + m * 30 / 60 + s * 30 / 3600;
    double deg2 = m * 360 / 60 + s * 360 / 3600;
    double deg3 = s * 6;

    double dega = 30 * t1;
    double degb = 30 * t2;

    vector<double> dg = {deg1, deg2, deg3};
    sort(dg.begin(), dg.end());

    // for (int t : dg) {
    //     cout << t << endl;
    // }

    for (int i = 0; i < 2; ++i) {
        if (dg[i] <= dega && dega <= dg[i + 1]
         && dg[i] <= degb && degb <= dg[i + 1]) {
            yes();
        }
    }

    if (dega < dg[0]) dega += 360;
    if (degb < dg[0]) degb += 360;
    dg.push_back(dg[0] + 360);

    if (dg[2] < dega && dega < dg[3]
     && dg[2] < degb && degb < dg[3]) {
        yes();
    }

    cout << "NO\n";

    return 0;
}
