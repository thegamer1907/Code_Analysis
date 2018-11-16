#include <stdio.h>
#include <bits/stdc++.h>

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define file "tree"

using namespace std;
using ll = long long;
using ull = unsigned long long;
using str = string;
using srt = short;

const int INF = 1e9 + 4;
const int mod = 7 + 1e9;
const int N = 2000000 + 5;

bool check(str &s)
{
    int now = 1;
    for (int i = 1; s[i]; ++i)
    {
        if (s[i] == s[i - 1])
            ++now;
        else
            now = 1;
        if (now >= 7)
            return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    
    str s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
}



