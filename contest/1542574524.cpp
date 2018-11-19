#include <cstdio>
using namespace std;

int main()
{
    double h, m, s, t1, t2, p;
    bool ans = 0;
    scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
    h += m / 60 + s / 3600;
    m += s / 60;
    m /= 5;
    s /= 5;
    if (t1 > t2) p = t1, t1 = t2, t2 = p;
    if (h > t1 && h < t2 && m > t1 && m < t2 && s > t1 && s < t2) ans = 1;
    if ((h < t1 || h > t2) && (m < t1 || m > t2) && (s < t1 || s > t2)) ans = 1;
    if ( ans ) printf("YES");
    else printf("NO");
    return 0 ;
}
