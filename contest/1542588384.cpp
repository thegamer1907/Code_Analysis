#include <iostream>

using namespace std;

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    int m_hr = m / 5;
    int s_hr = s / 5;

    bool cw = true;
    bool ccw = true;
    if (t1 == t2) {
        cout << "YES" << endl;
        exit(0);
    }


    if (t1 > t2) {
        int tmp = t1;
        t1 = t2;
        t2 = tmp;
    }

    if (t1 < t2) {
        if (t1 <= h && h < t2) {
            cw = false;
        }
        if (t1 <= m_hr && m_hr < t2) {
            cw = false;
        }
        if (t1 <= s_hr && s_hr < t2) {
            cw = false;
        }

        if (h < t1 || t2 <= h)
            ccw = false;
        if (m_hr < t1 || t2 <= m_hr)
            ccw = false;
        if (s_hr < t1 || t2 <= s_hr)
            ccw = false;
    }

    if (cw || ccw)
        cout << "YES\n";
    else
        cout << "NO\n";
}
