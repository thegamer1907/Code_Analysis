#include <iostream>
#include <cmath>
#include <algorithm>

int main(int argc, char *argv[]) {
    float h, m, s, t1, t2;
    std::cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    t1 *= 5;
    t2 *= 5;
    if(h == 60) {
        h = 0;
    }
    if(t1 == 60) {
        t1 = 0;
    }
    if(t2 == 60) {
        t2 = 0;
    }
    if(s>0) {
        m += 0.5;
    }
    if(m>0) {
        h += 0.5;
    }
    bool flag = 0;
    if(t1 > t2) {
        std::swap(t1, t2);
    }
    if((h < t2 && h > t1)&&(m < t2 && m > t1)&&(s < t2 && s > t1)) {
        flag = 1;
    }
    if(!(h <= t2 && h >= t1) && !(m <= t2 && m >= t1) && !(s <= t2 && s >= t1)) {
        flag = 1;
    }
    if(t1 == t2) {
        flag = 0;
    }
    std::cout << (flag?"YES":"NO");
    return 0;
}