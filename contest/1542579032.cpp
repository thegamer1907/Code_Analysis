#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string pass;
    string temp;
    int T;
    bool b, l;
    b = l = false;
    cin >> pass >> T;
    while (T--)
    {
        cin >> temp;
        if (temp == pass)
        {
            b = l = true;
            break;
        }
        if (temp[0] == pass[1])
            l = true;
        if (temp[1] == pass[0])
            b = true;
    }
    if (b && l)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}