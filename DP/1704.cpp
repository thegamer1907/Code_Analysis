#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t found;
    bool flag = false;
    if ( (found = s.find("AB")) != string::npos) {
        if (s.find("BA", found+2) != string::npos)
                flag = true;
    }

    if ( (found = s.find("BA")) != string::npos) {
        if (s.find("AB", found+2) != string::npos)
                flag = true;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}
