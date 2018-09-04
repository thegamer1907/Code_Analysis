#include <iostream>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int i = 0, j = 0, a = 0, b = 0, ans = 0;
    while (j < n) {
        if (s[j++] == 'a') a++; else b++;
        while (a > k && b > k) if (s[i++] == 'a') a--; else b--;
        ans = max(ans, j-i);
    }
    cout << ans << endl;
}
