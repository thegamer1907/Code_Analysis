#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector <vector <bool>> open (n + 1, vector <bool> (m + 1, false));

    char ch;
    cin.get(ch);  // \n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin.get(ch);
            if (ch == '.')  open[i][j] = true;
        }
        cin.get(ch);  // \n
    }

    vector <vector <int>> dp (n + 1, vector <int> (m + 1, 0));
    vector <vector <int>> dpColumnLeft (n + 1, vector <int> (m + 1, 0));
    vector <vector <int>> dpRowUp (n + 1, vector <int> (m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            dpColumnLeft[i][j] = dpColumnLeft[i - 1][j];
            dpRowUp[i][j] = dpRowUp[i][j - 1];
            if (open[i][j] && open[i - 1][j]) {
                dp[i][j]++;
                dpRowUp[i][j]++;
            }
            if (open[i][j] && open[i][j - 1]) {
                dp[i][j]++;
                dpColumnLeft[i][j]++;
            }
        }
    }

    /*
    for (auto row : dp) {
        for (auto el : row) {
            cout << el << " ";
        }
        cout << endl;
    }
    cout << endl;cout << endl;
    for (auto row : dpColumnLeft) {
        for (auto el : row) {
            cout << el << " ";
        }
        cout << endl;
    }
    cout << endl;cout << endl;
    for (auto row : dpRowUp) {
        for (auto el : row) {
            cout << el << " ";
        }
        cout << endl;
    }
    cout << endl;cout << endl;*/


    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        int dpUnion = dp[r2][c2] - dp[r2][c1 - 1] - dp[r1 - 1][c2] + dp[r1 - 1][c1 - 1];
        int additionalLefts = dpColumnLeft[r2][c1] - dpColumnLeft[r1 - 1][c1];
        int additionalUps = dpRowUp[r1][c2] - dpRowUp[r1][c1 - 1];
        cout << dpUnion - additionalLefts - additionalUps << endl;
    }

    return 0;
}
