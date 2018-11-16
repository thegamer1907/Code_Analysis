#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, t, l, i, step;
    string s;
    cin >> n >> t;
    cin >> s;
    l = s.length();    
    while (t-- > 0)
    {
        for (i = 0; i < l - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i + 1] = 'B', s[i] = 'G';
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}