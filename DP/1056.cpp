#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;

    int a[n];
    int ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones++;
        }
    }

    int maxones = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int zeroesflip = 0;
            int onesflip = 0;
            for (int k = i; k <= j; k++) {
                if (a[k]) {
                    zeroesflip++;
                }
                else {
                    onesflip++;
                }
            }
            maxones = max(maxones, ones - zeroesflip + onesflip);

        }
    }


    cout << maxones;




    return 0;
}
