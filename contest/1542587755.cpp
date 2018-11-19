#include <bits/stdc++.h>

using namespace std;

string s, k[101];
int n, ct;

main()
{
    cin >> s;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> k[i];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            string sb = k[i] + k[j];
            for (int x = 0; x < sb.size() - 1; ++x)
            {
                if (sb[x] == s[0] && sb[x + 1] == s[1])
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}
