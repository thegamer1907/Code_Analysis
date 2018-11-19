#include <iostream>
#include <algorithm>
#define MOD 43200
using namespace std;

typedef pair<double, int> tt;

int h, m, s, t1, t2;
tt l[5];

int main() {
    cin >> h >> m >> s >> t1 >> t2;

    h = (h * 3600 + m * 60 + s) % 43200;
    m = (m * 60 + s) % 3600;

    t1 = t1 * 3600;
    t2 = t2 * 3600;

    l[0] = {(double)h/43200.0, 0};
    l[1] = {(double)m/3600.0, 0};
    l[2] = {(double)s/60.0, 0};

    l[3] = {(double)t1/43200.0, 1};
    l[4] = {(double)t2/43200.0, 1};

    sort(l, l + 5);

    bool can = false;

    for(int i=0;i<5;i++) {
        int a = l[i].second;
        int b = l[(i+1)%5].second;

        if(a+b == 2)
            can = true;
    }

    cout << (can ? "YES" : "NO") << "\n";

    return 0;
}