#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a;
    int g = 0;
    string s;
    cin >> s;
    cin >> a;
    string str[a];
    int x11 = 0;
    int x22 = 0;
    char x1 = s[0];
    char x2 = s[1];
    for(int i = 0; i < a; i++)
    {
        cin >> str[i];
        if(str[i] == s)
        {
            g = 1;
        }
        if(str[i][0] == x2)
        {
            x22++;
        }
        if(str[i][1] == x1)
        {
            x11++;
        }
    }
    if(x22 > 0)
    {
        if(x11 > 0)
        {
            g = 1;
        }
    }
    if(g == 0)
    {
        cout << "NO";
    }
    else cout << "YES";
    return 0;
}
