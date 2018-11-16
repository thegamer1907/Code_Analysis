#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795028841971
#define EPS 0.000001

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();
    int n, a, b;
    cin >> n >> a >> b;
    a += n - 1, b += n - 1;
    int cnt = 0;
    while(a != b)
    {
        a >>= 1, b >>= 1;
        cnt++;   
    }
    if((1 << cnt) == n) cout << "Final!";
    else cout << cnt;
}
