#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-10;
double t1, t2, a[3];

int cmp(double x) {
    if(x < -eps) {
        return -1;
    }
    return x > eps;
}

bool in(double t1, double t2, double l, double r) {
    bool ok = true;
    if(cmp(l - t1) > 0 || cmp(t1 - r) > 0) {
        return false;
    }
    if(cmp(l - t2) > 0 || cmp(t2 - r) > 0) {
        return false;
    }
    return ok;
}

bool notIn(double t1, double t2, double l, double r) {
    if(cmp(l - t1) <= 0 && cmp(t1 - r) <= 0) {
        return false;
    }
    if(cmp(l - t2) <= 0 && cmp(t2 - r) <= 0) {
        return false;
    }
    return true;
}

int main() {
//    freopen("../Data/Input3.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    cin >> a[0] >> a[1] >> a[2] >> t1 >> t2;
    if(cmp(t1 - 12) == 0) {
        t1 = 0;
    }
    t1 *= 5;
    if(cmp(t2 - 12) == 0) {
        t2 = 0;
    }
    t2 *= 5;
    if(cmp(a[0] - 12) == 0) {
        a[0] = 0;
    }
    a[0] *= 5;
    a[1] += a[2] / 60;
    a[0] += a[1] / 12;
    sort(a, a + 3);
    if(in(t1, t2, a[0], a[1])) {
        cout <<"YES" <<endl;
        return 0;
    }
    if(in(t1, t2, a[1], a[2])) {
        cout <<"YES" <<endl;
        return 0;
    }
    if(notIn(t1, t2, a[0], a[2])) {
        cout <<"YES" <<endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
