#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> s;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    s.push_back(s1);
    s.push_back(s2);
    s.push_back(s3);
    sort(s.begin(), s.end());
    if (s[0] == s[1] && s[0] == s[2])
    {
        cout << "0" << endl;
    }
    else if ((s[0] == s[1]) || (s[1] == s[2]) || (s[0] == s[2]))
    {
        cout << "1" << endl;
    }
    else if ((s[0][1] == s[1][1] && s[0][1] == s[2][1]) && (s[0][0]-'0' +1 == s[1][0]-'0') && (s[1][0]-'0' + 1 == s[2][0]-'0'))
    {
        cout << "0" << endl;
    }
    else if ((s[0][1] == s[1][1]) && ((s[0][0]-'0' + 1 == s[1][0]-'0') || (s[0][0]-'0' + 2 == s[1][0]-'0')))
    {
        cout << "1" << endl;

    }
    else if ((s[1][1] == s[2][1]) && ((s[1][0]-'0' + 1 == s[2][0]-'0') || (s[1][0]-'0' + 2 == s[2][0]-'0')))
    {
        cout << "1" << endl;
    }
    else if ((s[0][1] == s[2][1]) && ((s[0][0]-'0' + 1 == s[2][0]-'0') || (s[0][0]-'0' + 2 == s[2][0]-'0')))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
    }
}