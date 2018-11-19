#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;

    cin.ignore();

    int n;
    cin >> n;
    cin.ignore();

    vector < string > v;
    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(s == p)
        {
            flag = true;
        }

        v.push_back(s);
    }

    if(flag)
        cout << "YES" << endl;

    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            string t = v[i];

            if(t[1] == p[0])
            {
                for(int j = 0; j < v.size(); j++)
                {
                    t = v[j];
                    if(t[0] == p[1]) {
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(flag)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
