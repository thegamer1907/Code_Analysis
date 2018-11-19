#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    long n;
    cin >> n;
    string a[n];
    for (int i=0; i<n; ++i)
    {
        cin >> a[i];
        if (a[i]==s)
        {
            cout << "YES";
            return 0;
        }
    }
    bool kt=false;
    for (int i=0;i<n; ++i)
        if (s[0]==a[i][1])
            kt=true;
    if (kt)
        for (int i=0; i<n; ++i)
            if (s[1]==a[i][0])
            {
                cout << "YES";
                return 0;
            }
    cout << "NO";

}
