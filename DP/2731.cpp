#include <bits/stdc++.h>

int main() {
    int n, ans = 0;
    std::cin >> n;
    ans += n / 100; n %= 100;
    ans += n / 20;  n %= 20;
    ans += n / 10;  n %= 10;
    ans += n / 5;   n %= 5;
    ans += n;
    std::cout << ans << '\n';
    return 0;
}