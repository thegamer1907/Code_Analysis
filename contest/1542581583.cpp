#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps = 1e-6;

int sgn(double k) {
    // printf("k = %f\n", k);
    if(k > eps) return 1;
    else if(k < -eps) return -1;
    return 0;
}

int main(void) {
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    double hh, mm, ss, tt1, tt2;
    ss = 6.0 * s;
    mm = 6.0 * m + s / 10.0;
    hh = 30.0 * h + m / 2.0 + s / 120.0;
    tt1 = 30.0 * t1, tt2 = 30.0 * t2;
    if(sgn(tt1 - tt2) > 0) {
        double tmp = tt1;
        tt1 = tt2;
        tt2 = tmp;
    }
    // printf("%f %f %f %f %f\n", hh, mm, ss, tt1, tt2);
    int cnt = 0;
    if(sgn(tt1 - hh) <= 0 && sgn(hh - tt2) <= 0) cnt++;
    if(sgn(tt1 - mm) <= 0 && sgn(mm - tt2) <= 0) cnt++;
    if(sgn(tt1 - ss) <= 0 && sgn(ss - tt2) <= 0) cnt++;
    if(cnt == 3 || cnt == 0) 
        printf("YES\n");
    else 
        printf("NO\n");
    return 0;
}