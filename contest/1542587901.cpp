#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sys/time.h>
#include <cmath>
#include <tuple>
#include <queue>

using namespace std;

void solve(string pw, int n, vector<string> wo) {
    bool flag = false;
    bool head = false;
    bool tail = false;
    for (int i = 0; i < n; i++) {
        if (pw == wo[i]) {
            flag = true;
            break;
        }
        if (pw[0] == wo[i][1]) {
            head = true;
        }
        if (pw[1] == wo[i][0]) {
            tail = true;
        }
    }
    if (flag || (head && tail)) {
         std::cout << "YES" << std::endl;
    } else {
         std::cout << "NO" << std::endl;
    }
}

int main() {
    struct timeval start,end;
    long long span;
    string pw;
    int n;

    gettimeofday(&start,NULL);

    std::cin >> pw;
    std::cin >> n;
    vector<string> wo(n);
    for (int i = 0; i < n; i++) {
        std::cin >> wo[i];
    }
    solve(pw, n, wo);

    gettimeofday(&end,NULL);
    span = (end.tv_sec -start.tv_sec)*1000000LL + (end.tv_usec - start.tv_usec);
    std::cerr << "--Total Time: " << span/1000 << "ms" << endl;
    return 0;
}
