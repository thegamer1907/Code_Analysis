#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 1; cnt <= 1e4; ++i) {
        int k = i, cur = 0;
        while (k != 0) {
            cur += k%10;
            k /= 10;
        }
        if (cur == 10) cnt++;
        if (cnt == n) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}