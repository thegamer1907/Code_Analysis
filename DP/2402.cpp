#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool p[1000001];

int main ()
{
    ios_base::sync_with_stdio(false);
  //  freopen("input.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = INT_MAX;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }
    ans = min(ans, sum);
    int index = 0;
    for (int i = k; i < n; i++) {
        sum += v[i];
        sum -= v[i-k];
        if (sum < ans) {
            ans = sum;
            index = i-k+1;
        }
    }
    cout << index+1;
    return 0;
}
