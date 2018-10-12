#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    int a[n], b[n];
    cin >> a[0];
    b[0] = a[0];
    for(int i=1;i<n;i++) {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    int l = 0, r = n * 3;
    while (r > l) {
        int m = (r + l + 1) / 2;
        bool flag = true;
        for(int i=m-1;i<n;i++)
            if (b[i] - b[i-m+1] + a[i-m+1] <= t) {
                l = m;
                flag = false;
                break;
            }
        if (flag) r = m - 1;
    }
    cout << l;
}
