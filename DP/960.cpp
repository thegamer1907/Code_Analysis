#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> li(n);

    for (int x = 0; x < n; x ++) cin >> li[x];

    int Max = 0;

    for (int x = 0; x < n; x ++) {
        for (int y = 1; y < n - x + 1; y ++) {
            int zeros = 0;
            for (int i = 0; i < x; i ++)
                if (li[i] == 1)
                    zeros ++;

            for (int i = x; i < x + y; i ++)
                if (li[i] == 0)
                    zeros ++;

            for (int i = x + y; i < n; i ++)
                if (li[i] == 1)
                    zeros ++;

            Max = max(zeros, Max);
        }
    }

    cout << Max << endl;

    return 0;
}

