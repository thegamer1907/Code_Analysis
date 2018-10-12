#include <iostream>
#include <vector>

using namespace std;

int main(int, char**) {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int tt = 0, res = 0;
    for (int i = n - 1, cnt = 0; i >= 0; --i) {
        tt += v[i];
        cnt++;
        while (tt > t) {
            tt -= v[i + cnt - 1];
            cnt--;
        }
        if (cnt > res) res = cnt;
    }
    cout << res << endl;
    return 0;
}
