#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char a[300],b[300];
    int n;
    cin >> s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (s[0] == a[i] && s[1] == b[i]) {cout << "YES" << endl; return 0;}
    }
    if (n == 1) {a[1] == a[0]; b[1] == b[0];}
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[0] == b[j] && s[1] == a[i]) {cout << "YES" << endl; return 0;}
        }
    }
    cout << "NO" << endl;
}
