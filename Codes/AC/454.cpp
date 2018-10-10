#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    int i = 1;
    while (i++) {
        int ans = 0;
        int ib = i;
        while (i) {
            ans += i % 10;
            i /= 10;
        }
        if (ans == 10 && ++c == n) {
            cout << ib;
            break;
        }
        i = ib;
    }
}
