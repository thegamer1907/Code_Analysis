#include <bits/stdc++.h>

#define F first
#define S second

using namespace std;

typedef long long ll;

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // LOCAL
    int n , a , b;
    cin >> n >> a >> b;
    a--;
    b--;
    int x = 0;
    while ((1 << x) < n)
        x++;
    int cur = 0;
    while (a != b){
        cur++;
        a /= 2;
        b /= 2;
    }
    if (cur < x)
        cout << cur;
    else
        cout << "Final!";
    return 0;
}
