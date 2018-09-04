#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<long long> pr(n);
    for (int &k : arr) { cin >> k; }

    pr[0] = arr[0];
    for (int k = 1; k < n; k++) { pr[k] = pr[k - 1] + arr[k]; }

    int L = -1;
    long long sum = 0, ans = 0;

    for (int R = n - 1; R >= 0 && R > L; R--) {
        sum += arr[R];
        int bl = -1, br = n - 1;
        while (br - bl > 1) {
            int mid = (bl + br) / 2;
            if (pr[mid] < sum) { bl = mid; }
            else { br = mid; }
        }
        if (br >= R) { break; }
        if (pr[br] == sum) { ans = sum; }
        L = br;
    }
    cout << ans;

    return 0;
}
