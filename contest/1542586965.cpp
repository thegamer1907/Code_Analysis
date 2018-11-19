#include <iostream>
#include <string>
#include <set>

int main(int argc, char *argv[]) {
    std::string code, temp;
    std::cin >> code;
    bool flag = 0;
    int n;
    std::cin >> n;
    std::set<char> start, end;
    for(int i = 0; i < n; i++) {
        std::cin >> temp;
        if(temp.find(code) != code.npos) {
            flag = 1;
        }
        start.insert(temp[0]);
        end.insert(temp[temp.length() - 1]);
    }
    if(start.count(code[1]) != 0 && end.count(code[0]) != 0) {
        flag = 1;
    }
    std::cout << (flag?"YES\n":"NO\n");
    return 0;
}
