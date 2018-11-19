#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    long long n;
    cin >> n;
    vector <string> b(n);
    for (long long i = 0; i < n; i++)
        cin >> b[i];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            string c = b[i] + b[j];
            if (c.find(a) != -1)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
