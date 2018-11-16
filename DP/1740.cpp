#include <bits/stdc++.h>

using namespace std;

string s;

int findss(int pos)
{
    string ss = s.substr(pos+3, s.length() - pos -1 - 2);
    if (ss.find("AB") != string::npos || ss.find("BA") != string::npos) cout << "YES";
    else cout << "NO";
}

int main()
{
    cin >> s;

    int aba = s.find("ABA");
    int bab = s.find("BAB");


    if (aba != string::npos)
    {
        if (bab != string::npos && bab < aba) findss(bab);
        else findss(aba);
    }
    else if (bab != string::npos) findss(bab);
    else if (s.find("AB") != string::npos && s.find("BA") != string::npos) cout << "YES";
    else cout << "NO";

    return 0;
}
