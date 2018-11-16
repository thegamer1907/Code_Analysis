#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef map<int, int> mpii;
typedef unordered_map<int, int> umpii;
#define pb(v) push_back(v)
const int inf = 1e9 + 9;
/*...................................................*/

int main()
{
    int i, j;
    string s;
    cin >> s;
    int mxa = 0, mxb = 0, a = 0, b = 0;
    if (s[0] == '0')
        mxa = a = 1;
    else
        mxb = b = 1;

    for (i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i] == '0')
                a++, mxa = max(a, mxa);
            else
                b++;
            mxb = max(b, mxb);
        }
        else
        {
            a = b = 1;
        }
    }
    if (mxa >= 7 || mxb >= 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}