#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int h, m, s,t1, t2;
    std::cin >> h >> m >> s >> t1 >> t2;
    h *= 3600;
    h += m * 60;
    h += s;
    m *= 720;
    m += s * 12;
    s *= 720;
    h %= 43200;
    m %= 43200;
    s %= 43200;
    t1 *= 3600;
    t2 *= 3600;
    t1 %= 43200;
    t1 %= 43200;
    std::vector<int> arrows = {h, m, s};
    std::sort(arrows.begin(), arrows.end());
    if (t1 >= arrows[0] && t1 <= arrows[1] && t2 >= arrows[0] && t2 <= arrows[1]) {
        std::cout << "YES\n";
        return 0;
    } else if (t1 >= arrows[1] && t1 <= arrows[2] && t2 >= arrows[1] && t2 <= arrows[2]) {
        std::cout << "YES\n";
        return 0;
    } else if (arrows[0] == 0) {
        if (t1 >= arrows[2] && t2 >= arrows[2]) {
            std::cout << "YES\n";
            return 0;
        }
    } else if (arrows[0] > 0) {
        if ((t1 >= arrows[2] || t1 <= arrows[0]) && (t2 >= arrows[2] || t2 <= arrows[0])) {
            std::cout << "YES\n";
            return 0;
        }
    }
    std::cout << "NO\n";
}