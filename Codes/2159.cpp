#include<bits/stdc++.h>
using namespace std;



long long pre[200005];

int main() {
#ifdef Adel_SaadEddin_PC
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // Adel_SaadEddin_PC

    int n; cin >> n ;

    vector<int>vec;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vec.push_back(x);
        pre[i] = x;
    }

    for (int i = 1; i < n; i++)
        pre[i] += pre[i - 1];

    long long sum1 = 0, sum2 = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum2 += vec[i];
        int j = lower_bound(pre, pre + i, sum2) - pre;
        if (j == i)
            sum1 = -1;
        else
            sum1 = pre[j];
        if (sum1 == sum2)
            ans = sum1;
    }

    cout << ans << "\n";
}