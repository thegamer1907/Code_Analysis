#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c = 1;
    bool d = false;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
            ++c;
        else
            c = 1;
        if (c == 7)
            d = true;
    }
    if (d)
        cout << "YES";
    else
        cout << "NO";
}
