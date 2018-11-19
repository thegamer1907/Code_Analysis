#include <bits/stdc++.h>
using namespace std;
string a[105];

int main()
{
    string p, t;
    cin >> p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
                t = a[i] + a[j];
                if (t.find(p) != string::npos)
                {
                    cout << "YES";
                    return 0;
                }
        }
    }
    cout << "NO";
    return 0;
}
