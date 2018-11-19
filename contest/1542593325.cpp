#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t[105];
    int n;
    cin >> s;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> t[i];
        if(t[i] == s) cout << "YES", exit(0);
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(t[i][1] == s[0] && t[j][0] == s[1]) cout << "YES", exit(0);
        }
    }
    cout << "NO" << endl;
}

