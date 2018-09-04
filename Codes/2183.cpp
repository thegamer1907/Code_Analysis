#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

#define f first
#define s second
typedef pair<int, int> pii; 
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    int j = n;
    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < j; i++) {
        sum1 += a[i];
        while (i < j - 1 && sum2 < sum1)
            sum2 += a[--j];
        if (sum1 == sum2)
            ans = max(ans, sum1);
    }
    cout << ans << endl;
    
    return 0;
}

