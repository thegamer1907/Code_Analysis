#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int k, n, w, total = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) total += k*i;

    int b = total - n;
    if (b <= 0) cout << 0;
    else cout << b << endl;
}
