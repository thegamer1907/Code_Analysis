#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    
    
    int ans = 1;
    for (int i = 2; i <= n; i *= 2) {
        for (int j = 1; j < n; j += i) {
            if (a >= j && a < j + i && b >= j && b < j + i) {
                if (i == n) {
                    cout << "Final!" << endl;
                } else {
                    cout << ans << endl;
                }
                return 0;
            }
        }
        
        ans++;
    }
    return 0;
}
