#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int get(int l, int r, int a, int b, int ch) {
    if (l + 1 == r) {
        return ch;
    }
    int mid = l + (r - l) / 2;
    if (a < mid && mid <= b) {
        return ch;
    }
    else if (a < mid) {
        return get(l, mid, a, b, ch - 1);
    }
    return get(mid, r, a, b, ch - 1);
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ch = 0;
    int nn = n;
    while (n > 0) {
        ch++;
        n /= 2;
    }
    if (a > b) {
        swap(a, b);
    }
    int res = get(1, nn + 1, a, b, ch);
    if (res == ch) {
        cout << "Final!" << endl;
    }
    else {
        cout << res - 1 << endl;
    }
}