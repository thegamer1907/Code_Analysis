#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
const int N = 5e5 + 10;
int arr[N], n, ans;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);
    sort(arr, arr + n);
    int p2 = n / 2;
    int p1 = 0;
    while (p1 < n / 2 && p2 < n) {
        if (arr[p2] >= 2 * arr[p1]) {
            ans++;
            p1++;
        }
        p2++;
    }
    printf("%d", n - ans);
    return 0;
}