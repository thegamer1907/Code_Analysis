#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    long long ans = 0;
    int i = 0, j = 0, k = 0, cnt = 0;
    if (n > 0) {
        while (j < s.size()) {
            if (s[j++] == '1') cnt++;
            if (cnt < n) continue;
            if (cnt == n && k == 0) { k=1; while (s[i] == '0' && i < j) i++, k++; }
            if (cnt == n) ans += k;
            if (cnt > n) {
                i++; k = 1; cnt--;
                while (s[i] == '0' && i < j) i++, k++;
                ans += k;
            }
        }
    } else {
        i = s.find('1');
        ans += (long long)i * (i + 1) / 2;
        while((j = s.find('1', i+1)) != string::npos) {
            ans += (long long)(j - i) * (j - i - 1) / 2;
            i = j;
        }
        ans += (long long)(s.size() - i) * (s.size() - i - 1) / 2;
    }
    cout << ans << endl;
}
