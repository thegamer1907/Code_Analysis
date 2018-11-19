#include <bits/stdc++.h>
using namespace std;
bool flag;
bool f1, f2;
double h, m, s, t1, t2;
int main()
{
    f1 = f2 = true;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12) h = 0;
    if(t1 == 12)    t1 = 0;
    if(t2 == 12)    t2 = 0;

    h *= 30;
    h += 0.5*m;
    h += 0.0083333*s;
    m *= 6;
    m += 0.1*s;
    s *= 6;

    t1 *= 30;
    t2 *= 30;

//    printf("%f  %f  %f  %f  %f\n", t1, t2, h, m, s);

    if(t1 > t2) swap(t1, t2);
    if(h > t1 && h < t2)    f1 = false;
    if(m > t1 && m < t2)    f1 = false;
    if(s > t1 && s < t2)    f1 = false;

    t1 += 360;   ///= =
    swap(t1, t2);
    if(m < t1)  m += 360;
    if(h < t1)  h += 360;
    if(s < t1)  s += 360;
    if(h > t1 && h < t2)    f2 = false;
    if(m > t1 && m < t2)    f2 = false;
    if(s > t1 && s < t2)    f2 = false;

    flag = f1 | f2;
    puts(flag ? "yes" : "no");
    return 0;
}
