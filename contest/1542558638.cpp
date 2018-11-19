#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>


using namespace std;

int n;
string s, x;
bool b1 = 0, b2 = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        if(x == s)
        {
            puts("YES");
            return 0;
        }
        if(s[0] == x[1]) b1 = 1;
        if(s[1] == x[0]) b2 = 1;
    }
    if(b1 && b2) puts("YES");
    else puts("NO");
    return 0;
}
