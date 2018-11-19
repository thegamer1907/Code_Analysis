#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> problems(n, std::vector<int>(k, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            int x;
            std::cin >> x;
            problems[i][j] = !x;
        }
    }
    // std::cout << "check: " << problems[0][0];
    if (k == 1) {
        bool any = false;
        for (int i = 0; i < n; ++i) {
            if (problems[i][0] == 1)
                any = true;
        }
        if (any) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        return 0;
    }
    if (k == 2) {
        bool any1 = false, any2 = false;
        for (int i = 0; i < n; ++i) {
            if (problems[i][0] == 1)
                any1 = true;
            if (problems[i][1] == 1)
                any2 = true;
        }
        if (any1 && any2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        return 0;
    }
    if (k == 3) {
        bool all = false, anytwo = false, one = false, two = false, three = false;
        for (int i = 0; i < n; ++i) {
            if (problems[i][0] && problems[i][1] && problems[i][2])
                all = true;
            if (problems[i][0] + problems[i][1] + problems[i][2] >= 2)
                anytwo = true;
            if (problems[i][0])
                one = true;
            if (problems[i][1])
                two = true;
            if (problems[i][2])
                three = true;
        }
        if (one && two && three && anytwo) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        return 0;
    }
    if (k == 4) {
        bool all = false, any3 = false, one = false, two = false, three = false, four = false,
        any12 = false, any13 = false, any14 = false, any23 = false, any24 = false, any34 = false;
        for (int i = 0; i < n; ++i) {
            if (problems[i][0])
                one = true;
            if (problems[i][1])
                two = true;
            if (problems[i][2])
                three = true;
            if (problems[i][3])
                four = true;
            if (problems[i][0] && problems[i][1] && problems[i][2] && problems[i][3])
                all = true;
            if (problems[i][0] + problems[i][1] + problems[i][2] + problems[i][3] >= 3)
                any3 = true;
            if (problems[i][0] && problems[i][1])
                any12 = true;
            if (problems[i][0] && problems[i][2])
                any13 = true;
            if (problems[i][0] && problems[i][3])
                any14 = true;
            if (problems[i][1] && problems[i][2])
                any23 = true;
            if (problems[i][1] && problems[i][3])
                any24 = true;
            if (problems[i][2] && problems[i][3])
                any34 = true;
        }
        if (all) {
            std::cout << "YES\n";
        } else if (any3 && one && two && three && four) {
            std::cout << "YES\n";
        } else if (any12 && any34) {
            std::cout << "YES\n";
        } else if (any13 && any24) {
            std::cout << "YES\n";
        } else if (any14 && any23) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        return 0;
    }
}
