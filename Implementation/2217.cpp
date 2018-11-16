#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k , n , w , s = 0 ;
    cin >> k >> n >> w ;
    for (int i = 1 ; i <= w ; i++)
    {
        s += i * k ;
    }
    if (n <= s)
        cout << abs(n-s) << endl ;
    else
        cout << 0 << endl ;
    return 0;
}
