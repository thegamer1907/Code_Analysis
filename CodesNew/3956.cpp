#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200005;

long long sum[MAXN];

int n;

int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("data.out", "w", stdout);
    int q;
    cin >> n >> q;
    for(int i = 1; i <= n; ++i){
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    long long arr, total = 0;
    for(int i = 1; i <= q; ++i){
        cin >> arr;
        total += arr;
        int diff = 0;
        for(int p = 20; p >= 0; --p){
            if(diff + (1 << p) <= n && sum[diff + (1 << p)] <= total)
                diff += (1 << p);
        }
        if(diff == n){
            diff = 0;
            total = 0;
        }
        cout << n - diff << "\n";
    }
    return 0;
}
