#include <bits/stdc++.h>

using namespace std;

int ct[16];
int cnt[4];
int sum;
int k;

bool go(int i){
    if (i + 1 == (1 << k)){
        return false;
    }
    for (int j = 0; j <= min(3, ct[i]); j++){
        for (int l = 0; l < k; l++){
            if ((i >> l) & 1) {
                cnt[l] += j;
            }
        }
        sum += j;
        bool b = true;
        for (int l = 0; l < k; l++){
            b &= cnt[l] * 2 <= sum;
        }
        if ((sum != 0 && b) || go(i + 1)){
            return true;
        }
        for (int l = 0; l < k; l++){
            if ((i >> l) & 1) {
                cnt[l] -= j;
            }
        }
        sum -= j;
    }
    return false;
}

int main()
{
    #ifdef DEBUG
    freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int sm = 0;
        for (int j = 0; j < k; j++){
            int c;
            cin >> c;
            sm = sm * 2 + c;
        }
        ct[sm]++;
    }
    if (ct[0] > 0){
        cout << "YES\n";
        return 0;
    }
    if (go(1)){
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}


