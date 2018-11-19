#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sys/time.h>
#include <cmath>
#include <tuple>
#include <queue>

using namespace std;

void solve(int h, int m, int s, int t1, int t2) {
    int sx = s/5;
    int mx = m/5;
    int hx = h%12;
    if (t2 < t1) {
        int tmp = t1;
        t1 = t2;
        t2 = tmp;
    }
    bool sb0 = false;
    bool mb0 = false;
    bool hb0 = false;
    if (sx < t1) {
        sb0 = true;
    }
    if (mx < t1) {
        mb0 = true;
    }
    if (hx < t1) {
        hb0 = true;
    }
    bool sb1 = false;
    bool mb1 = false;
    bool hb1 = false;
    if (sx < t2) {
        sb1 = true;
    }
    if (mx < t2) {
        mb1 = true;
    }
    if (hx < t2) {
        hb1 = true;
    }
    bool sb = false;
    bool mb = false;
    bool hb = false;
    if ((sb0 && sb1) || (!sb0 && !sb1)) {
        sb = true;
    }
    if ((mb0 && mb1) || (!mb0 && !mb1)) {
        mb = true;
    }
    if ((hb0 && hb1) || (!hb0 && !hb1)) {
        hb = true;
    }
    if ((sb && mb && hb) || (!sb && !mb && !hb)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}

int main() {
    struct timeval start,end;
    long long span;
    int h, m, s;
    int t1, t2;

    gettimeofday(&start,NULL);

    std::cin >> h >> m >> s >> t1 >> t2;
    solve(h, m, s, t1, t2);

    gettimeofday(&end,NULL);
    span = (end.tv_sec -start.tv_sec)*1000000LL + (end.tv_usec - start.tv_usec);
    std::cerr << "--Total Time: " << span/1000 << "ms" << endl;
    return 0;
}
