#include <bits/stdc++.h>

using namespace std;

int n, k, x, cur, cnt[20];

inline void Y(){
    cout << "YES";
    exit(0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen("test.inp", "r", stdin);
//    freopen("test.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cur = 0;
        for (int j = 1; j <= k; j++){
            cin >> x;
            cur <<= 1;
            cur += x;
        }
        cnt[cur]++;
    }
    if (cnt[0] > 1) Y();
    for (int i = 0; i < (1 << k); i++)
        for (int j = 0; j < (1 << k); j++)
            if (cnt[i] && cnt[j]){
                bool flag = true;
                for (int x = 0; x < k; x++)
                    if (((i >> x) & 1) == 1 && 1 == ((j >> x) & 1))
                        flag = false;
                if (flag)
                    Y();
            }
    cout << "NO";
}
