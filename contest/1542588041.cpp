#include <bits/stdc++.h>

using namespace std;

const double eps = 1e-8;

int dcmp(double x) {
    if (fabs(x) < eps) return 0;
    return x < 0 ? -1 : 1;
}

double calc(double a, double all, double base) {
    double tmp = a * base / all;
    return tmp;
}

int main(int argc, char const *argv[]) {

    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    double a1 = calc(t1, 12, 360), a2 = calc(t2, 12, 360);

    if (dcmp(a1 - a2) > 0) swap(a1, a2);

    double aa[3];
    aa[0] = calc(h, 12, 360) + calc(m, 60, 30) + calc(s, 60, 0.5);
    aa[1] = calc(m, 60, 360) + calc(s, 60, 6);
    aa[2] = calc(s, 60, 360);



    bool flag1 = true, flag2 = true;
    for (int i = 0; i < 3; i ++) {
        if (dcmp(a1 - aa[i]) < 0 && dcmp(aa[i] - a2) < 0)
            flag1 = false;
        if (dcmp(a1 - aa[i]) > 0 || dcmp(a2 - aa[i]) < 0)
            flag2 = false;
    }

    puts((flag1 || flag2) ? "YES" : "NO");
    
    return 0;
}