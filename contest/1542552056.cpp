#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>

using namespace std;


int main()
{
    int n;
    string s;
    cin >> s;
    cin >> n;
    vector<string> vs(n);
    set<char> s1;
    set<char> s2;
    for (int i = 0; i < n; ++i)
    {
        cin >> vs[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (vs[i] == s)
        {
            cout << "YES";
            return 0;
        }
        s1.insert(vs[i][0]);
        s2.insert(vs[i][1]);
    }
    if (s1.find(s[1]) != s1.end() && s2.find(s[0]) != s2.end())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}