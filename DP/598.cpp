#include <bits/stdc++.h>
using namespace std;
const int max_n = 1e5;
int DP[max_n];
int main()
{
    int n;
    string s;
    cin >> s >> n;
    for (int i = 1; i < s.size(); i++)
        DP[i] = DP[i - 1] + (s[i] == s[i - 1]);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << DP[r] - DP[l] << endl;
    }
}
