#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int counter = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            counter++;
        else
            counter = 1;
        if (counter >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
