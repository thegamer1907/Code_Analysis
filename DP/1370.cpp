#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
#define int long long

int gcd(int a, int b) {
    if(!a)
        return b;
    return gcd(b % a, a);
}

int32_t main() {

    IOS;

    int n, flag1 = -1, flag2 = -2;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            flag1 = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == 0) {
            flag2 = i;
            break;
        }
    }
    if(flag1 == flag2)
        cout << n;
    else if(flag1 == -1 && flag2 == -2)
        cout << n - 1;
    else {
        int count0, count1, count = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 1)
                count++;
        }
        for(int i = flag1; i <= flag2; i++) {
            for(int j = i; j <= flag2; j++) {
                count0 = 0;
                count1 = 0;
                for(int k = i; k <= j; k++) {
                    if(a[k] == 1)
                        count1++;
                    else
                        count0++;
                }
                ans = max(ans, count - count1 + count0);
            }
        }
        cout << ans;
    }


    return 0;
}
