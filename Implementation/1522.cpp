#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    int z = 0 , x = 0 ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s[i] == '0')
        {
            z++ ;
            x = 0 ;
        }
        else
        {
            x++ ;
            z = 0 ;
        }
        if (z == 7 || x == 7)
        {
            cout << "YES" << endl ;
            return 0 ;
        }
    }
    cout << "NO" << endl ;
    return 0;
}
