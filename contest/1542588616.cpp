#include <bits/stdc++.h>

using namespace std;

bool in_range(double from, double to, double block) {
    if (from < block && block < to) {
        return true;
    }
    return false;
}

bool out_range(double from, double to, double block) {
    return block < from || block > to;
}

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    int from, to;
    cin >> from >> to;
    if (to < from) {
        swap(from, to);
    }
    h %= 12;
    double hh = h + 0.5, mm = m / 5. + 0.01, ss = s / 5. + 0.01;
    if (in_range(from, to, hh) && in_range(from, to, mm) && in_range(from, to, ss)) {
        puts("YES");
        return 0;
    }
    if (out_range(from, to, hh) && out_range(from, to, mm) && out_range(from, to, ss)) {
        puts("YES");
        return 0;
    }
    puts("NO");
    return 0;
}
