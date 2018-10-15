#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
const int maxn = 5e5 + 10;
string s[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = n - 2; i >= 0; i--)
    {
        int l = 1, r = (int)s[i].length() + 1;
        string q = s[i];
        if(q > s[i + 1])
        {
            for(int j = 0; j < 30; j++)
            {
                int mid = (l + r) / 2;
                q = s[i].substr(0, mid);
                if(q <= s[i + 1])
                    l = mid;
                else
                    r = mid;
            }
        }
        s[i] = q;
    }
    for(int i = 0; i < n; i++)
        cout << s[i] << endl;
    return 0;
}
