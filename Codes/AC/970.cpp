#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string in;
int a[100005], n, K;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> K >> in;
    for(int i = 0; i < n; ++i)  a[i] = in[i] - 'a';

    if(K == n) return 0 * printf("%d\n", n);
    if(K == 0) {//!!!
        int now = 1, ans = 1;
        for(int i = 1; i < n; ++i) {
            if(a[i] == a[i - 1]) ++now;
            else {
                now = 1;
            }
            ans = max(ans, now);
        }
        cout << ans << endl;
        return 0;
    }
    //look for consecutive zero first
    int last = 0, ans = 1, k = 0;
    if(K != 0 && a[0] == 1)   k = 1;
    for(int i = 1; i < n; ++i) {
        if(k < K) {
            if(a[i] == 1)   ++k;
            ans = max(ans, i - last + 1);
        } else {
            if(a[i] == 1) {
                while(a[last] != 1) ++last;
                ++last;
            }
            ans = max(ans, i - last + 1);
        }
    }

    last = 0;
    k = 0;
    if(K != 0 && a[0] == 0)   k = 1;
    for(int i = 1; i < n; ++i) {
        if(k < K) {
            if(a[i] == 0)   ++k;
            ans = max(ans, i - last + 1);
        } else {
            if(a[i] == 0) {
                while(a[last] != 0) ++last;
                ++last;
            }
            ans = max(ans, i - last + 1);
        }
    }
    cout << ans << endl;
}
