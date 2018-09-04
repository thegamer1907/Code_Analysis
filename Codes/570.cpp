#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const long double eps = 1e-9;

#define MOD 1000000007
#define MAX 200005

#define X real()
#define Y imag()

typedef complex<double> point;
const double EPS = 1e-9;

int ar[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int ac[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

bool per(int x) {
    int res = 0;

    while(x) {
        res += x % 10;
        x /= 10;
    }

    return res == 10;
}

int main() {
#ifdef Adel_SaadEddin_PC
    freopen("input.txt", "r", stdin);
//    freopen("output.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);

    int k; cin >> k;

    int res = 0, x = 0;

    while(++x) {
        if(per(x))
            res++;
        if(res == k)
            return cout << x << "\n", 0;
    }

    return 0;
}

