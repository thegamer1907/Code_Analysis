#include <bits/stdc++.h>

using namespace std;

//using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int mn = min(a, b), mx = max(a, b);

    int sum = 1;

    int st=1, en=n;
    while(1) {
        int sered = (en+st-1)/2;

        if (mn <= sered && mx > sered)
            break;

        sum++;
        if (mn <= sered)
            en = sered;
        else
            st = sered + 1;
    }

    if (sum==1)
        cout << "Final!";
    else
        cout << log2(n)-sum + 1;

    return 0;
}
