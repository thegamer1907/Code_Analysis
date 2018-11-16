#include <bits/stdc++.h>

using namespace std;
const int maxn = 150 * 1000;
int a[maxn + 10];
int sum[maxn + 10];
int main()
{
    int n , k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sum[0] = a[0];
    for(int i = 1; i < n; i++){
        sum[i] += sum[i - 1] + a[i];
    }
    int min_sum = k * 100 + 10, ans = 0;
    for(int i = 0; i <= n - k; i++){
        int summ = sum[i + k - 1] - sum[i - 1];
       if(summ < min_sum){
        min_sum = min(min_sum ,summ);
        ans = i;
       }
    }
    cout << ans + 1;
    return 0;
}
