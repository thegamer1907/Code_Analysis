#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string S;
    cin >> S;

    int n = S.length();
    S = 'X' + S;

    vector<int> F(n + 1, 0);

    for (int i = 1; i < n; i++)
    {
        F[i] = F[i - 1];
        if (S[i] == S[i + 1]) F[i]++;
    }
    F[n] = F[n - 1];

    int m; cin >> m;

    while (m--)
    {
        int l, r; cin >> l >> r;
        cout << F[r - 1] - F[l - 1] << "\n";
    }

    return 0;
}
