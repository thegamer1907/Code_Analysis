#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ever (;;)
#define ALL(s) s.begin(),s.end()

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k, cnt = 0, sum, j, i;
    cin >> k;
    for (i = 19; cnt < k; ++i) {
        sum = 0;
        j = i;
        while (j > 0 && sum <= 10) {
            sum += j % 10;
            j /= 10;
        }
        if (sum == 10)
            cnt++;
    }
    cout << i - 1;
}
