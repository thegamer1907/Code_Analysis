#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = 1; i < 12; i++, a = (a + 1) / 2, b = (b + 1) / 2)
    if (a + 1 == b && a % 2){
        if ((1 << i) == n)
            cout << "Final!" << endl;
        else
            cout << i << endl;
        return 0;
    }

    return 0;
}
