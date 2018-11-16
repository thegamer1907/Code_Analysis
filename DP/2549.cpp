#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0); std::cerr.tie(0);
    
    int n; std::cin >> n;
    std::vector<ll> arr(n);
    for(auto& it : arr) std::cin >> it;
    arr.push_back(0);
    int answ = 1;
    for (int i = 1, len = 1; i <= n; ++i) {
        if (arr[i] > arr[i-1]) {
            len++;
        } else {
            answ = std::max(answ, len);
            len = 1;
        }
        //std::cout << "len = " << len << std::endl;
    }
    std::cout << answ;
    
    return 0;
}