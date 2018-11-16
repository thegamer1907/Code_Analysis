#include <bits/stdc++.h>


auto main() -> int {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    size_t count;
    std::cin >> count;

    std::vector<int> array(count);
    for (auto &elem : array) { std::cin >> elem; }

    size_t answer = 0;
    for (size_t i = 0, j = 0; j <= array.size(); ++j) {
        answer = std::max(answer, j - i);
        if (j > 0 && j < array.size() && array[j - 1] >= array[j]) {
            i = j;
        }
    }   

    std::cout << answer << '\n';

    return 0;
}
