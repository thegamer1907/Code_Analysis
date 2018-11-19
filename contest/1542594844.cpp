#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string a[150];

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int fl0=0,fl1=0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i]==s)
        {
            cout << "YES";
            return 0;
        }
        if (a[i][0]==s[1]){fl0=1;}
        if (a[i][1]==s[0]){fl1=1;}
    }
    if (fl0*fl1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
