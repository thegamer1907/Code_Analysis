#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;
const int MAXN = 1000;

struct ST
{
    double t;
    int n;

    
};

bool Less (const ST& a, const ST& b ) {
        return a.t < b.t;
}

ST T[5];

int main() 
{
    double h, m, s, t1, t2;
    int ans = 0;
    
    cin >> h >> m >> s >> t1 >> t2;
    m = m / 60 * 12;
    s = s / 60 * 12;
    if (s != 0)
        m += 0.01;
    if (m != 0)
        h += 0.01;

    T[0].t = h;
    T[0].n = 0;
    T[1].t = m;
    T[1].n = 1;
    T[2].t = s;
    T[2].n = 2;
    T[3].t = t1;
    T[3].n = 3;
    T[4].t = t2;
    T[4].n = 4;

    sort(T, T+5, Less);
    int i1, i2;
    for (int i = 0; i < 5; ++i) {
        if (T[i].n == 3)
            i1 = i;
        if (T[i].n == 4)
            i2 = i; 
    }

    if (abs(i1-i2) == 1 || abs(i1-i2) == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}