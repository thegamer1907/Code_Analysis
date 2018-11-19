#include <bits/stdc++.h>

using namespace std;

vector<string> f, s;

int main()
{
    string pin;
    cin >> pin;

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        string temp;
        cin >> temp;

        if(temp == pin)
        {
            cout << "YES\n";
            exit(0);
        }

        string st = temp;
        reverse(st.begin(), st.end());

        if(st == pin)
        {
            cout << "YES\n";
            exit(0);
        }

        if(temp[0] == pin[1])
            s.push_back(temp);
        if(temp[1] == pin[0])
            f.push_back(temp);

    }

    if(!s.empty() && !f.empty())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
