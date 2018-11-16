//266B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    char str[50];

    cin >> n >> t >> str;

    for(int j = 0; j < t; j++)
    {
        for(int i = 1; i < n; i++)
        {
            if(str[i] == 'G' && str[i - 1] == 'B')
            {
                str[i] = 'B';
                str[i - 1] = 'G';
                i++;
            }
        }
    }

    cout << str << endl;

    return 0;
}
