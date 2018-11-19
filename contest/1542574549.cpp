#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int h, m, s, t1, t2;
int main()
{
    while (cin >> h >> m >> s >> t1 >> t2)
    {
        bool flag = 0;
        bool flag1 = 0;
        if (h == 12)
            h = 0;
        if (m == 60)
            m = 0;
        if (s == 60)
            s = 0;
        if (t1 == 12)
            t1 = 0;
        if (t2 == 12)
            t2 = 0;
        h *= 30;
        m *= 6;
        s *= 6;
        t1 *= 30;
        t2 *= 30;
        h += m / 60;
        m += s / 60;
        if (m)
            s++;
        if (h >= 360)
            h -= 360;
        if (m >= 360)
            m -= 360;
        if (s >= 360)
            s -= 360;
        if (t1 > t2)
            swap(t1, t2);

        if (h >= t1&&h<t2&&m>=t1&&m<t2&&s>=t1&&s < t2)
            flag = 1;
        if (m < t1)
            m += 360;
        if (h < t1)
            h += 360;
        if (s < t1)
            s = +360;
        t1 += 360;
        if (h >= t2&&h<t1&&m>=t2&&m<t1&&s>=t2&&s < t1)
            flag = 1;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}