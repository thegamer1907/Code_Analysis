#include <bits/stdc++.h>

#define _ << " " <<
#define dbg(x)  "(" <<  #x << " = " << x << ")"

using namespace std;

int main() {

    int n; cin >> n;
    int sz;
    vector<int> qs(n);

    int mini = numeric_limits<int>::max();
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        cin >> sz;
        int step = ceil(double(sz-i)/n);
//        cerr << dbg(i) _ dbg(step) << endl;
        if (mini > step) {
            mini = step;
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}

