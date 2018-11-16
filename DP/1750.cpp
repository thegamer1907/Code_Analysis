#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;

    cin >> S;

    int PS;

    if(S.find("AB") == string::npos || S.find("BA") == string::npos)
    {
        cout << "NO" << endl;
        return 0;
    }

    PS = S.find("AB");
    if(S.find("BA" , PS+2) != string::npos)
    {
        cout << "YES" << endl;
        return 0;
    }

    PS = S.find("BA");
    if(S.find("AB" , PS+2) != string::npos)
    {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}
