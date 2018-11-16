#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    if (a <= n / 2 && b > n / 2) {
        cout << "Final!";
        return 0;
    } else {
        --a, --b;
        int ans = 1;
        int cr = 2;
        while (true) {
            int na = a / cr;
            int nb = b / cr;
            if (na == nb) {
                cout << ans;
                return 0;
            } else {
                ans++;
                cr *= 2;
            }
        }
    }
    return 0;
}
