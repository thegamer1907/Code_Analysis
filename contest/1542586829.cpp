#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>

// using namespace std;

typedef long long ll;

int help(std::vector<int> kit) {
    int sol = 0;

    for (size_t i = 0; i < kit.size(); ++i) {
        sol = sol * 2 + kit[i];
    }

    return sol;
}

int main() {
    // freopen("input.txt", "r", stdin);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> counter((1 << (k + 1)), 0);
    for (size_t i = 0; i < n; ++i) {
        std::vector<int> kit(k);

        for (size_t j = 0; j < k; ++j) {
            std::cin >> kit[j];
        }

        int id = help(kit);
        ++counter[id];
    }

    bool flag = false;

    if (counter[0] != 0)
        flag = true;

    for (size_t i = 0; i < (1 << k); ++i) {
        for (size_t j = 0; j < (1 << k); ++j) {
            if ((i & j) == 0 && counter[i] != 0 && counter[j] != 0)
                flag = true;
        }
    }


    if (flag) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

}
