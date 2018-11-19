#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string pass;
    std::cin >> pass;
    int n;
    std::cin >> n;
    bool first = false, second = false;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        if (str[0] == pass[0] && str[1] == pass[1]) {
            first = true;
            second = true;
        }
        if (str[1] == pass[0])
            first = true;
        if(str[0] == pass[1])
            second = true;
    }
    if (first && second)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}