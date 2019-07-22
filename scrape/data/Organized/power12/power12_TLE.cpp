#include <iostream>
#include <vector>
#include <cstdio>

typedef long long LL;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    LL n, m, k;
    std::cin >> n >> m >> k;
    LL right = k, count = 0, delta = 0;
    LL x;
    for (LL i = 0; i < m; i++) {
        std::cin >> x;
        if (x <= right) {
            if (!delta) {
                count++;
            }
            delta++;
        } else {
            if (delta) {
                right += delta;
            } else {
                right += k;
            }
            if (x <= right) {
                count++;
            } else {
                while (x > right) {
                    right += k;
                }
                count++;
            }
            delta = 1;
        }

//        std::cin >> drops[i];
    }
//    count++;
//    LL right = k, count = 0, ind = 0, i, delta = 0;
    /*while (ind < m) {
        for (i = ind; i < m; i++) {
            if (drops[i] <= right) {
                delta++;
            } else {
                break;
            }
        }
        ind = i;
        if (delta != 0) {
            count++;
            right += delta;
        } else {
            right += k;
        }
        delta = 0;
    }*/
    std::cout << count << std::endl;
    return 0;
}