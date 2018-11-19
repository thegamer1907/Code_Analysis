#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[3];

int main()
{
    //freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);

    int t1, t2;
    cin >> a[0] >> a[1] >> a[2] >> t1 >> t2;

    if (a[0] == 12) {
        a[0] = 0;
    }
    a[0] *= 5;

    if (a[1] % 5 == 0 && a[2])
        a[1]++;
    if (a[1] || a[2])
        a[0]++;


    t1 *= 5;
    t2 *= 5;
    t1 %= 60;
    t2 %= 60;

    sort(a, a + 3);


    //cout << a[0] << " " << a[1] << " " << a[2] << endl;
    //cout << t1 << " " << t2 << endl;

    for (int i = 0; i < 3; i++) {
        int dst = a[(i + 1)%3] - a[i];
        if (i == 2) dst += 60;

        int d1 = (t1 - a[i] + 60) % 60;
        int d2 = (t2 - a[i] + 60) % 60;

        if (d1 < dst && d2 < dst) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
