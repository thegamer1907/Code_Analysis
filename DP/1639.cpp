
#include<bits/stdc++.h>
using namespace std;
int main()
{


#ifndef ONLINE_JUDGE
    // for sgetting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int n = s.size();
    bool x = false, y = false;
    for (int i = 0; i + 1 < n;)
    {
        if (s.substr(i, 2) == "AB" && !x)
        {x = true; i += 2;}
        else if (s.substr(i, 2) == "BA" && x)
            y = true, i += 2;

        else i++;
    }

    if (x && y)
        cout << "YES";
    else

    {   x = y = false;
        for (int i = 0; i + 1 < n; )
        {
            if (s.substr(i, 2) == "BA" && !y)
            {y = true; i += 2;}
            else if (s.substr(i, 2) == "AB" && y)
            { x = true, i += 2;}

            else i++;

        }
        if (x && y)
            cout << "YES";
        else
            cout << "NO";
    }
}