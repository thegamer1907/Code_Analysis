#include <iostream>
#include <vector>
#include <algorithm>


void CalculateMinAndMax(const std::vector<int>& benches,
                        int m, int& min, int& max) {
    std::vector<int> sorted;

    sorted.insert(sorted.end(), benches.begin(), benches.end());
    std::sort(sorted.begin(), sorted.end(), 
        [](int a, int b) { return a < b; });

    int result_max = sorted.back();
    result_max += m;

    int people_left = m;

    for (auto it = sorted.rbegin(); it != sorted.rend(); ++it) {
        if (*it < sorted.back()) {
            int num_to_take = std::min(sorted.back() - *it, people_left);
            *it += num_to_take;
            people_left -= num_to_take;
        }
    }

    int num_to_share = people_left / static_cast<int>(sorted.size());
    int result_min = sorted.back();
    result_min += num_to_share;

    people_left = people_left - num_to_share * static_cast<int>(sorted.size());

    if (people_left > 0) {
        result_min += 1;
    }

    min = result_min;
    max = result_max;
}


int main(int argc, char** argv) {
    int n, m;
    std::vector<int> benches;

    std::cin >> n;
    std::cin >> m;

    for (int i = 0; i < n; ++i) {
        int a_i;
        std::cin >> a_i;
        benches.push_back(a_i);
    }

    int min = -1, max = -1;

    CalculateMinAndMax(benches, m, min, max);

    std::cout << min << " " << max;

    return 0;
}