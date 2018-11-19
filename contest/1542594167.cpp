#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <set>

using namespace std;

typedef long long ll;

const ll MAXN = 1e5 + 2, INF = 9e15, MOD = 1e9 + 7;

ll n, m, ans;
bool doog, a, b;
string s, p;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >>p;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> s;
        if(s[0] == p[0] && s[1] == p[1])
        {
            cout << "YES";
            return 0;
        }
        if(s[1] == p[0])
            a = 1;
        if(s[0] == p[1])
            b = 1;
    }
    if(a && b)
    {
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}
