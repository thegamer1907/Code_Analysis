#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MAXN = 5 + 200000;
ll arr[MAXN];
int N;

int main() {
    cin >> N;
    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int j = N;
    ll s1 = 0LL, s2 = 0LL, ans = 0LL;
    for(int i = 0; i < N; ++i) {
        s1 += arr[i];
        while(s1 > s2) {
            s2 += arr[--j];
        }
        if(i >= j) break;
        if(s1 == s2) ans = s1;
    }
    cout << ans;
    return 0;
}
