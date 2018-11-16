#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;

    cin >> n;

    int A[n][3];

    for (int i = 0; i < n; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++) sum += A[j][i];
        if (sum != 0) { cout << "NO\n"; return 0; }
    }
    cout << "YES\n";
}
