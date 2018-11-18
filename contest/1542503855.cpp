#include<bits/stdc++.h>
using namespace std;

double p[3];
double h, m, s, t1, t2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;

    p[0] = s/60;
    p[1] = (m*60 + s)/3600;
    p[2] = (h*3600 + m*60 + s)/43200;
    sort(p, p + 3);

    int id1 = lower_bound(p, p + 3, t1/12) - p;
    if (id1 == 3) id1 = 0;
    int id2 = lower_bound(p, p + 3, t2/12) - p;
    if (id2 == 3) id2 = 0;

    if (id1 == id2) cout << "YES";
    else cout << "NO";
    return 0;
}
