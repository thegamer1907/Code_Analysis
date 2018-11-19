#include<bits/stdc++.h>
using namespace std;



int main() {
    //freopen("input.txt", "r", stdin);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    int h1 = (h * 3600 + 60 * m + s) % 43200, m1 = (m * 720 + 12 * s) % 43200, s1 = (s * 720) % 43200;
    t1 %= 12;
    t2 %= 12;
    t1 = (t1 * 3600) % 43200;
    t2 = (t2 * 3600) % 43200;
    if (t1 > t2)
        swap(t1, t2);

//cout << h1 << " " << m1 << " " << s1 << " " << t1 << " " << t2;
    int fl1 = 0, fl2 = 0;
    for (int i = t1; i <= t2; ++i) {
        if (h1 == i || m1 == i || s1 == i)
            fl1 = 1;
    }
    if (fl1 == 0) {
        cout << "YES";
        return 0;
    }
    int i = t2;
    for (int j = 1; j <= 43200 + t1 - t2; ++j) {
        if (h1 == i || m1 == i || s1 == i)
            fl2 = 1;
        i = (i + 1) % 43200;
    }
    //cout << fl2;
    if (fl2 == 0) {
        cout << "YES";
        return 0;
    }
    //cout << h1 << " " << m1 << " " << s1 << " " << t1 << " " << t2;
    cout << "NO";

    
    
    return 0;
}