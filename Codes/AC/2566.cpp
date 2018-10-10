// Abhay Singh Bhadoria ( _Asb_ ) //
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int a[N];
int dp[10 * N];
int cnt[10 * N];
bool yes[10 * N];
bool isCom[10 * N];
int main() {
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", a + i);
        yes[a[i]] = true;
        cnt[a[i]]++;
    }
    for(int i = 2; i <= 1e7; ++i) {
        if(!isCom[i]) {
            if(yes[i]) {
                dp[i] += cnt[i];
            }
            for(int j = 2 * i; j <= 1e7; j += i) {
                isCom[j] = true;
                if(yes[j]) {
                    dp[i] += cnt[j];
                }
            }
        }
    }
    for(int i = 1; i <= 1e7; ++i) {
        dp[i] += dp[i - 1];
    }
    scanf("%d", &k);
    while(k--) {
        int l, r;
        scanf("%d %d", &l, &r);
        r = min(r, (int)1e7);
        if(l > 1e7) {
            l = r + 1;
        }
        printf("%d\n", dp[r] - dp[l - 1]);
    }
}
