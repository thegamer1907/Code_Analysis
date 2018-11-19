#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;
const int MAXN = 1000;

int main() 
{
    string str;
    string s[110];
    int n;
    bool ans = false;
    cin >> str;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            string ss = s[i] + s[j];
            if (ss.find(str) != ss.npos)
                ans = true;
        }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}