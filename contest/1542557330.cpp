#include <bits/stdc++.h>

using namespace std;

bool F1[30];
bool F2[30];
int main()
{
    string a;
    cin >> a;
    int n;
    cin >> n;
    memset(F1, false, sizeof(F1));
    memset(F2, false, sizeof(F2));
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        string b;
        cin >> b;
        if(a == b)
            flag = true;
        F1[b[1] - 'a'] = true;
        F2[b[0] - 'a'] = true;
    }
    if(flag)
    {
        cout <<  "YES" << endl;
    }
    else
    {
        if(F1[a[0] - 'a'] && F2[a[1] - 'a'])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
