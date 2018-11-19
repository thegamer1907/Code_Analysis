//  _   _            _                     _  //
// | | | | __ _  ___| | __  _ __ ___   ___| | //
// | |_| |/ _` |/ __| |/ / | '_ ` _ \ / _ \ | //
// |  _  | (_| | (__|   <  | | | | | |  __/_| //
// |_| |_|\__,_|\___|_|\_\ |_| |_| |_|\___(_) //

#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::string pass;
    std::cin >> pass;
    int n;
    std::cin >> n;
    std::vector<std::string> str(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> str[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::string cur = str[i] + str[j];
            if (cur.find(pass) != std::string::npos) {
                std::cout << "YES\n";
                return 0;
            }
        }
    }
    std::cout << "NO\n";
    return 0;
}