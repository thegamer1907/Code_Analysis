#include <iostream>

int main(int argc, char *argv[]) {
    int t, n;
    int cur_pos = 1, i = 1;
    std::cin >> n >> t;
    while (cur_pos <= t) {
        if (cur_pos == t) {
            std::cout << "YES";
            return 0;
        }
        int a_i;
        std::cin >> a_i;
        if (i++ != cur_pos)
            continue;
        cur_pos += a_i;
    }
    std::cout << "NO";
    return 0;
}
