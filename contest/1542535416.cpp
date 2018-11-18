#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 2 * 1e5 + 7;
const ll MOD = 1e9 + 7;

string a[N];

int main()
{
    ios::sync_with_stdio(0);
    string s, ss;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            ss = a[i] + a[j];
            if (ss.find(s) != -1)
                return cout << "YES", 0;
        }
    cout << "NO" << endl;
    return 0;
}
