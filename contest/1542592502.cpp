#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>

// using namespace std;

typedef long long ll;

int main() {
    // freopen("input.txt", "r", stdin);

    std::string s;
    std::cin >> s;

    int n;
    std::cin >> n;

    std::vector<std::string> kit(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> kit[i];
    }

    bool flag = false;
    for (size_t i = 0; i < n; ++i) {
        if (kit[i] == s) {
            flag = true;
            break;
        }

        for (size_t j = i; j < n; ++j) {
            if (kit[i][0] == s[1] && kit[j][1] == s[0]) {
                flag = true;
                break;
            }
            if (kit[j][0] == s[1] && kit[i][1] == s[0]) {
                flag = true;
                break;
            }
        }
    }

    if (flag) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

}
