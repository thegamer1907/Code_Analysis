#include <iostream>
using namespace std;
int main() {
    string p, tmp;
    int n;
    cin >> p >> n;
    bool f = 0, l = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp == p) {
            printf("YES");
            return 0;
        }
        if (tmp[1] == p[0]) {
            f = 1;
        }
        if (tmp[0] == p[1]) {
            l = 1;
        }
    }
    printf(f && l ? "YES" : "NO");
    return 0;
}