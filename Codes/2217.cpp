#include <cstdio>

typedef long long ll;

const int MAXN = 2e5 + 10;

int arr[MAXN];

int main() {
    int N;
    scanf("%d", &N);
    int l_idx = 0, r_idx = N;
    ll l_sum = 0, r_sum = 0, ans = 0;

    for (int i = 0; i < N; i++) 
        scanf("%d", &arr[i]);
    
    while (l_idx < r_idx) {
        if (l_sum < r_sum) {
            l_sum += arr[l_idx++];
        } else {
            r_sum += arr[--r_idx];
        }
        
        if (l_sum == r_sum) {
            ans = l_sum;
        }
    }

    printf("%lld\n", ans);
}
