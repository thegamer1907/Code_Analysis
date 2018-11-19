
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    double a, b;
    vector<double> timevec(3);
    while (cin >> timevec[0] >> timevec[1] >> timevec[2] >> a >> b) {
        timevec[1] += timevec[2]/60;
        timevec[0] += timevec[1]/60;
        timevec[2] /= 60;
        timevec[1] /= 60;
        timevec[0] /= 12;
        a /= 12;
        b /= 12;
        sort(timevec.begin(), timevec.end());
        if (a > b) {
            swap(a, b);
        }
        if (b < timevec[0] || a > timevec[2] || (a < timevec[0] && b > timevec[2]) ||
                (a > timevec[1] && b < timevec[2]) || (a > timevec[0] && b < timevec[1]))
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();

    return 0;
}

