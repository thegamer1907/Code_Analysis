#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b; cin >> n >> a >> b;
    int k = 2;
    int res = 1;

    while (true) {
        if ((a - 1) / k == (b - 1) / k) {
        if (k == n)
            cout << "Final!" << endl;
        else cout << res << endl;
        return 0;
    }
    else {
            ++res;
            k *= 2;
    }
    }

    return 0;
}