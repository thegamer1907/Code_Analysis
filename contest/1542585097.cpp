#include <bits/stdc++.h>
using namespace std;

typedef long long llong;
typedef pair<int,int> Pii;

float h, m, s;
int t1, t2;

int main() 
{
    scanf("%f %f %f %d %d", &h, &m, &s, &t1, &t2);

    if (s > 0) m += 0.5;
    if (m > 0) h += 0.5;
    m /= 5.0;
    s /= 5.0;

    if (t2 < t1) {
        int tmp = t2;
        t2 = t1;
        t1 = tmp;
    }

    // printf("%f %f %f - %d %d\n", h, m, s, t1, t2);

    bool ans1 = true;
    if (t1 <= h && h <= t2) ans1 = false;
    if (t1 <= m && m <= t2) ans1 = false;
    if (t1 <= s && s <= t2) ans1 = false;

    if (t1 < 12) t1 += 12;
    if (h < t2) h += 12.0;
    if (m < t2) m += 12.0;
    if (s < t2) s += 12.0;

    // printf("%f %f %f - %d %d\n", h, m, s, t1, t2);

    bool ans2 = true;
    if (t2 <= h && h <= t1) ans2 = false;
    if (t2 <= m && m <= t1) ans2 = false;
    if (t2 <= s && s <= t1) ans2 = false;

    printf("%s\n", (ans1 || ans2) ? "YES" : "NO");
}
