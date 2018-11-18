/**
    * author vovan2005;
    * created 21:29:23 16.02.1018;
**/
#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <stack>
#include <vector>
#include <string>
#include <conio.h>
#include <map>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159265359
#define pb push_back
#define rev reverse
#define ll long long

using namespace std;

int main()
{
    string s;
    string tmp;
    cin >> s;
    int n;
    cin >> n;
    vector <string> v(n);
    int d = 0;
    int d1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i][1] == s[0])
        {
            d++;
        }
        else if (v[i][0] == s[1])
        {
            d1++;
        }
        if (v[i] == s)
        {
            cout << "YES";
            return 0;
        }
        tmp = s;
        reverse(v[i].begin(), v[i].end());
        if (v[i] == tmp)
        {
            cout << "YES";
            return 0;
        }
    }
    if (d > 0 && d1 > 0)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    return 0;
}