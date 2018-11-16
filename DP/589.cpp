#include <iostream>

using namespace std;
const int N = 1e5+1;
int nr1[N],nr2[N];

int main()
{
    string s;
    cin >> s;
    for (int i = 1; i<s.length(); i++)
        if (s[i] == s[i-1])
        {
            if (s[i] == '.')
            {
                nr1[i] = nr1[i-1]+1;
                nr2[i] = nr2[i-1];
            }
            else
            {
                nr2[i] = nr2[i-1]+1;
                nr1[i] = nr1[i-1];
            }
        }
        else
        {
            nr1[i] = nr1[i-1];
            nr2[i] = nr2[i-1];
        }
    int m;
    cin >> m;
    for (int i = 1; i<=m; i++)
    {
        int l,r,s1,s2;
        cin >> l >> r;
        l--;
        r--;
        s1 = nr1[r]-nr1[l];
        s2 = nr2[r]-nr2[l];
        cout << s1+s2 << "\n";
    }
}
