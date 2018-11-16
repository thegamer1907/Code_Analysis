#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n; cin >> n;
    int p[n]; for (int i = 0; i < n; i++) cin >> p[i];
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        int tmp = 0;
        for (int j = i; j != -1; j = p[j-1]) tmp++;
        ans = max(tmp, ans);
    }
    cout << ans << endl;
}
