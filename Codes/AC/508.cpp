#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ever (;;)
#define ALL(s) s.begin(),s.end()

bool check(int i) {
    int sum;
    for (sum = 0; i > 0 && sum <= 10; i /= 10)
        sum += i % 10;
    return (sum == 10);
}

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k, cnt = 0, i;
    cin >> k;
    for (i = 19; cnt < k; ++i) {
        if (check(i))
            cnt++;
    }
    cout << i - 1;
}
