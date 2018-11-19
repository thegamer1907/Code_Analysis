#include <bits/stdc++.h>

using namespace std;

#define rep(x,s,e) for(int x=(int)s;x<(int)e;x++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;

bool cw(double t, double x) {
    if (t <= x || x == 0)
        return true;
    else
        return false;
}

bool ccw(double t, double x) {
    if (t >= x || x == 0)
        return true;
    else
        return false;
}

void fix(double& a) {
    while(a < 0)
        a += 60.0;
    while(a >= 60)
        a -= 60.0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double h,m,s, t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5.0, t1 *= 5.0, t2 *= 5.0;
    m += s / 60.0;
    h += m / 60.0;

    h -= t1, m -= t1, s -= t1, t2 -= t1;
    //h %= 12, m %= 12, s %= 12, t2 %= 12;
    fix(h), fix(m), fix(s), fix(t2);
    t1 = 0.0;


    // DEBUG DEBUG DEBUG
    //cout << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;

    if ((cw(t2, h) && cw(t2, m) && cw(t2, s)) || (ccw(t2, h) && ccw(t2, m) && ccw(t2, s)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}