#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int l = 0;
    map <int, int> mp;
    int ans = 0;
    int start_pos = -1, end_pos = -1;
    for (int r = 0; r < n; ++r) {
        mp[a[r]]++;
        while (mp[0] > k && l < r) {
            mp[a[l]]--;
            l++;
        }
        if (l <= r && mp[0] <= k) {
            if (r - l + 1 > ans) {
                ans = r - l + 1;
                start_pos = l;
                end_pos = r;
            }
        }
    }
    cout << ans << '\n';
    for (int i = 0; i < n; ++i) {
        if (start_pos <= i && i <= end_pos) {
            printf("1 ");
        }
        else {
            printf("%d ", a[i]);
        }
    }
    return 0;
}