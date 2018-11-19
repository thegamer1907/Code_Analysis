#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
    double h, m, s, t1, t2, f = 0;
    scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
    if(t1 > t2) swap(t1, t2);
    t1 *= 5; t2 *= 5;
    h += m/60.0 + s/3600.0;
    m += s/60.0;
    if(t1/5 <= h && h <= t2/5) {
        if(t1 <= m && m <= t2 && t1 <= s && s <= t2)
            f = 1;
    }else {
        if((m <= t1 || t2 <= m) && (s <= t1 || t2 <= s))
            f = 1;
    }
    printf("%s\n", f?"YES":"NO");
    return 0;
}
