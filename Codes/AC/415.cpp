#include <bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

inline int sumd(int x) {
    int ans = 0;
    while(x) {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    int k;
    cin >> k;
    int x = 0;
    while(k) {
        x++;
        if(sumd(x) == 10) {
            k--;
        }
    }
    cout << x << endl;
    return 0;
}
