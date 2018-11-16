#include <iostream>
// #include <math.h>      
#include <string>
// #include <vector>
// #include <algorithm>
// #include <stdlib.h>
// #include <bits/stdc++.h>

using namespace std;



int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, t;
    string str;
    cin >> n >> t >> str;
    while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (str[i] == 'G' && str[i-1] == 'B')
            {
                str[i] = 'B';
                str[i-1] = 'G';
                ++i;
            }
        }
    }
    cout << str << endl;
    return 0;
}