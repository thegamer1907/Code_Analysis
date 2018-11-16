#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem = 0, i = 0;
    while (i < s.length())
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 1);
            dem++;
        }
        else
            i++;
    }
    cout << dem;
    return 0;
}