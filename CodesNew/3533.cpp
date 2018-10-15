#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m, old_m;
    cin >> n >> m;
    old_m = m;
    vector<int> numbers(n);

    int max_buf;
    cin >> numbers[0];
    max_buf = numbers[0];

    for (int i = 1; i < n; i++) {
        cin >> numbers[i];
        max_buf = max(numbers[i], max_buf); 
    }

    for (int i = 0; i < n && m; i++) {
        if (max_buf - numbers[i] <= m) {
            m -= (max_buf - numbers[i]);
            numbers[i] = max_buf;
        }
        else {
            numbers[i] += m;
            m = 0;
        } 
    }

    int max_res = max_buf;
    if (m) {
        max_res += m / n;
        if (m % n) max_res += 1;
    }

    cout << max_res << ' ' << max_buf + old_m; 

    return 0;
}
