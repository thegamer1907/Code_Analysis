#include <iostream>

using namespace std;

int main(int, char**) {
    int n, x, one_cnt = 0, len_max = 0, len_cur = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 0) {
            if (++len_cur > len_max)
                len_max = len_cur;
        } else {
            if (--len_cur < 0)
                len_cur = 0;
            one_cnt++;
        }
    }
    cout << (one_cnt + (len_max == 0 ? -1 : len_max)) << endl;
    return 0;
}
