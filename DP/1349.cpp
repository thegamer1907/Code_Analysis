#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    size_t n;
    std::cin >> n;

    std::vector<int> input(n);
    std::vector<int> aux(n);

    for (size_t i = 0; i < n; ++i) {
        std::cin >> input[i];
        if (!input[i]) {
            aux[i] = 1;
        } else {
            aux[i] = -1;
        }
    }

    int max_sum = std::numeric_limits<int>::min();
    int max_i = 0, max_j = 0;

    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i; j < n; ++j) {
            int sum = std::accumulate(aux.begin() + i, aux.begin() + j + 1, 0);
            if (max_sum < sum) {
                max_sum = sum;
                max_i = i;
                max_j = j;
            }
        }
    }

    while (max_i != (max_j + 1)) {
        input[max_i] = !input[max_i];
        ++max_i;
    }

    int count = 0;
    for (auto elem : input) {
        if (elem == 1) {
            ++count;
        }
    }

    std::cout << count;

    return 0;
}

