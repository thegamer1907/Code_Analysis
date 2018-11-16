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

    int max_so_far = std::numeric_limits<int>::min(), max_ending_here = 0;
    size_t max_i = 0, max_j = 0, s = 0;

    for (size_t i=0; i < aux.size(); i++ ) {
        max_ending_here += aux[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            max_i = s;
            max_j = i;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1;
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

