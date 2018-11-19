#include<bits/stdc++.h>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int MX = 105;
double h, m, s, t1, t2;
bool check1(double t1, double t2) {
    if (s < t1 && m > t1 && (s > t2 || m < t2)) return 0;
    return 1;
}
bool check2(double t1, double t2) {
    double l = h * 5, r = m;
    if (l > r) swap(l, r);
    if (l < t1 && r > t1 && (l > t2 || r < t2)) return 0;
    return 1;
}
bool check3(double t1, double t2) {
    double l = h * 5, r = s;
    if (l > r) swap(l, r);
    if (l < t1 && r > t1 && (l > t2 || r < t2)) return 0;
    return 1;
}
int main() {
    //freopen("in.txt", "r", stdin);
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    if (s > 0) m += 0.5;
    if (m > 0) h += 0.5;
    if (m < s) swap(s, m);
    int flag = 1;
    if (!check1(t1 * 5, t2 * 5) || !check1(t2 * 5, t1 * 5)) flag = 0;
    if (!check2(t1 * 5, t2 * 5) || !check2(t2 * 5, t1 * 5)) flag = 0;
    if (!check3(t1 * 5, t2 * 5) || !check3(t2 * 5, t1 * 5)) flag = 0;
    printf("%s\n", flag ? "YES" : "NO");
    return 0;
}
