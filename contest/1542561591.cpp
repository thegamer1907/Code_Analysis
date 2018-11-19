#include <bits/stdc++.h>

using namespace std;


int main()
{
    char c1, c2;
    int n;
    cin >> c1 >> c2 >> n;
    bool first = false, second = false;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s[0] == c2)
            first = true;
        if(s[1] == c1)
            second = true;
        if(s[0] == c1 && s[1] == c2)
            first = second = true;
    }
    if(first && second)
        cout << "YES";
    else
        cout << "NO";
   return 0;
}
