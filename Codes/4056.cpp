#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int dr[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dc[] = {0, 1, 0, -1, 1, 1, -1, -1};

int main() {
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ios::sync_with_stdio(0); // don't use printf
    cin.tie(0); // don't use scanf

    int n, m;

    while (cin >> n >> m) {
        int arr[n][m];

        int dp[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                dp[i][j] = 1;
            }
        }

        for (int j = 0; j < m; j++) {
            for (int i = 1; i < n; i++) {
                if (arr[i][j] >= arr[i - 1][j]) dp[i][j] += dp[i - 1][j];
            }
        }

//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << dp[i][j] << " ";
//            }
//            cout << endl;
//        }

        for (int i = 0; i < n; i++) {
            int maks = 0;
            for (int j = 0; j < m; j++) {
                maks = max(maks, dp[i][j]);
            }
            dp[i][0] = maks;
        }

        int k;
        cin >> k;

        while (k--) {
            int l, r;
            cin >> l >> r;

            --l, --r;
            int banyak = r - l + 1;

            if (banyak <= dp[r][0]) {
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }

    return 0;
}
