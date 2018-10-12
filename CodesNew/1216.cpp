#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <functional>
#include <algorithm>
#include <set>


int main()
{
    /*std::ifstream ifs ("input.txt", std::ifstream::in);
    std::ios_base::sync_with_stdio(false);
    ifs.tie(nullptr);
    std::istream &input = ifs;*/
    std::istream &input = std::cin;


    int n;
    std::vector<int> values;
    input >> n;
    for (int i = 0; i < n; ++i) {
        int now;
        input >> now;
        values.push_back(now);
    }

    int minimum = 2 * 1000 * 1000 * 1000;
    int min_pos;
    for (int i = 0; i < n; ++i) {
        if (values[i] < minimum) {
            minimum = values[i];
            min_pos = i;
        }
    }
    int his_pos_now;
    if (minimum > 0) {
        for (int i = 0; i < n; ++i) {
            values[i] = values[i] - (minimum - 1);
        }
        his_pos_now = (minimum - 1) % n;
    } else {
        his_pos_now = 0;
    }
    int passed = 0;
    while (true) {
        if (values[his_pos_now] - passed <= 0) {
            std::cout << his_pos_now + 1;
            return 0;
        }

        passed += 1;
        his_pos_now = (his_pos_now + 1) % n;
    }

}
