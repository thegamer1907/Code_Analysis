#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pass, str;
    int n;
    cin >> pass >> n;
    bool x = false, y = false;
    while(n--)
    {
        cin >> str;
        if(str==pass)
        {
            cout << "YES";
            return 0;
        }
        if(str[1] == pass[0]) x = true;
        if(str[0] == pass[1]) y = true;
    }

    if(x&&y) cout << "YES";
    else cout << "NO";

    return 0;
}
