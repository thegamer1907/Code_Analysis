#include <bits/stdc++.h>
using namespace std;

#define i64 long long
#define mp make_pair
typedef pair<i64, i64> pii;
typedef vector<bool> vb;
typedef vector<i64> vi;
i64 LINF = 1e18;
i64 MOD = 1000000009LL;

int main() {
    i64 n, diff = 0; cin >> n;
    while (n--) {
        i64 a, b; cin >> a >> b;
        if (a < b) diff--;
        if (a > b) diff++;
    }
    if (diff > 0) cout << "Mishka";
    else if (diff < 0) cout << "Chris";
    else cout << "Friendship is magic!^^";
	return 0;
}