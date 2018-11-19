#include <iostream>

using namespace std;

    bool start[26], finish[26];

int main()
{
    string s;
    cin >> s;

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        string t;
        cin >> t;
        if (t==s)
        {
            cout << "YES";
            return 0;
        }
        start[ int(t[0]-'a') ]=true;
        finish[ int(t[1]-'a') ]=true;
    }

    if (finish[ int(s[0]-'a') ] && start[ int(s[1]-'a') ])
    {
        cout << "YES";
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}
