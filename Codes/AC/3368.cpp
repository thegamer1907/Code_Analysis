#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <functional>
#include <algorithm>
#include <set>


bool is_okey(long long n, long long k) {
    long long n_first = 0, n_second = 0;
    while (true) {
        long long now = std::min(k, n);
        n = n - now;
        n_first += now;
        if (n == 0) {
            break;
        }

        now = n / 10;
        n = n - now;
        n_second += now;
    }

    if (n_first >= n_second) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    /*std::ifstream ifs ("input.txt", std::ifstream::in);
    std::ios_base::sync_with_stdio(false);
    ifs.tie(nullptr);*/

    long long n;
    std::cin >> n;

    long long left = 1;
    long long right = n + 1;

    /*for (int i = 1; i <= 10; ++i) {
        std::cout << i << is_okey(n, i) << '\n';
    }*/

    while (true) {
        long long middle = (left + right) / 2;
        if (is_okey(n, middle)) {
            right = middle;
        } else {
            left = middle;
        }

        if (right - left < 10) {
            for (long long i = left; i <= right; ++i) {
                if (is_okey(n, i)) {
                    std::cout << i;
                    return 0;
                }
            }
        }
    }

}
