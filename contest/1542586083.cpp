#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#define ll long long int
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
using namespace std;

int main() {
    int n, k, a[100005][4] = {}, b[16] = {}, c[4] = {1, 2, 4, 8};
    cin >> n >> k;
    fr(n) for (int j = 0; j < k; j++) cin >> a[i][j];
    fr(n) {
        int cc = 0;
        for (int j = 0; j < k; j++) if (a[i][j]) cc += c[j];
        b[cc]++;
    }
    fr(16) for (int j = 0; j < 16; j++) if ((!(i & j)) && b[i] && b[j]) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
