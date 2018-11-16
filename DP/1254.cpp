#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> pi;
constexpr double PI = atan(1) * 4;
constexpr int inf = 0x3f3f3f3f;
inline int LSB(int i) {return (i & -i);}

int n, dp[105], ans;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        dp[i] = dp[i-1] + x;
    }

    for(int i = n; i >= 0; i--){
        for(int j = i; j > 0; j--){
            int d = dp[i] - dp[j-1];
            ans = max(ans, dp[n] + (i - j + 1) - (2 * d));
        }
    }
    cout << ans << endl;
    return 0;
}
