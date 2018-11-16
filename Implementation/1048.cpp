#include <bits/stdc++.h>
using namespace std;

int main( )
{
    int n, i, j, t, c;
    string s;

    scanf("%d %d", &n, &t);
    cin >> s;

    for (j = 0; j < t; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }


    cout << s << endl;

    return 0;
}
