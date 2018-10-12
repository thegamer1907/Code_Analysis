#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 0x3fffffff;
const ll inf = 0x7fffffffffffffff;
const int MAXN = 100010;

int n;
int a[MAXN];


int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    int sum = INF;
    int ans;
    for (int i = 1; i <= n; i++) {
        int temp = (a[i] + 1) % n;
        if (temp == 0)
            temp = n;
        if (temp > i) {
            temp = temp + n - temp + i;
        } else if (temp < i) {
            temp += i - temp;
        }
        temp += a[i] / n * n;
        if (sum > temp) {
            sum = temp;
            ans = i;
        }
    }
    cout << ans << endl;
}