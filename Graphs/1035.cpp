#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n, t; cin >> n >> t;
    int a[n-1]; for (int i = 0; i < n-1; i++) cin >> a[i];
    for (int i = 0; ; i += a[i]) {
        if (i == t-1) { cout << "YES\n"; return 0; }
        else if (i == n-1) { cout << "NO\n"; return 0; }
    }
}
