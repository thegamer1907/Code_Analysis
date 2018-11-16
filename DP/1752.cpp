#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define INF 0x3f3f3f3f
const int N = 1e5 + 10;
bool ok(string s, int k)
{
    int mx = -1, mi = N;
    int len = s.size();
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == 'A' + k && s[i + 1] == 'B' - k)
            mi = min(i + 1, mi);
        else if (s[i] == 'B' - k  && s[i + 1] == 'A' + k)
            mx = max(i, mx);
    }
    return mi < mx;
}
int main()
{

    string s;
    cin >> s;

    if (ok(s, 0) || ok(s, 1))
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;

    }

    return 0;
}
