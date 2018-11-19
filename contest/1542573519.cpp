#include <bits/stdc++.h>
using namespace std;

string s[100];

int main()
{
    int n;
    string a;
    cin >> a >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        string res = "";
        for (int j = 0; j < n; j++)
        {
            res = s[i] + s[j];
            for (int p = 0; p < 3; p++)
                if (res[p] == a[0] && res[p + 1] == a[1])
                {
                    cout << "Yes";
                    return 0;
                }

            res.clear();
        }
    }
    cout << "No";
    return 0;
}
