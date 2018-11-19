#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    bool t = false, t1 = false;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        string k;
        cin >> k;
        if(k == s)
        {
            return cout << "YES", 0;
        }
        if(k[1] == s[0])
        {
            t = true;
        }
        if(k[0] == s[1])
        {
            t1 = true;
        }
    }
    if(t1 && t) return cout << "YES", 0;
    cout << "NO";
    return 0;
}
