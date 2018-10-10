#include <iostream>

using namespace std;

int n;
int a[100000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mm = 2000000000;
    int ans;
    for (int i = 0; i < n; i++) {
        int m = (a[i] - i - 1) < 0 ? 0 : ((a[i] - i - 1) / n + 1);
        int cm = i + m * n;
        //cout << i << ' ' << cm << endl;
        if (cm < mm) {
            mm = cm;
            ans = i;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}

/*
2 3 2 0
2 / 4 = 0
1 + (0 + 1) * 4

10 10 3 0
9 9 2 0
8 8 1 0

0 1~4
0 1
4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1
0 0 0 0

10 10 10 7
9 9 9 6
8 8 8 5
7 7 7 4
6 6 6 3
5 5 5 2
4 4 4 1
3 3 3 0


(>=2) 0 4 8 ...
(>=3) 1 5 9 ...
*/
