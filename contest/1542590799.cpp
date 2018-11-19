#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
#include <fstream>
#define maxn 500000
#define inf 1000000000
using namespace std;
string s[110], str;
int h[200][200];
int main()
{
    int n, i, j, l, l1;
    cin >> str;
    cin >> n;
    for(i = 1; i <= n; ++i)
    {
        cin >> s[i];
        l = s[i].length();
        for(j = 1; j < i; ++j)
        {
            l1 = s[j].length();
            h[s[j][l1 - 1]][s[i][0]] = 1;
            h[s[i][l - 1]][s[j][0]] = 1;
        }
        for(j = 0; j < l - 1; ++j)
            h[s[i][j]][s[i][j + 1]] = 1;
        h[s[i][0]][s[i][l - 1]] = h[s[i][l - 1]][s[i][0]] = 1;
    }
    if(h[str[0]][str[1]])
        puts("YES");
    else
        puts("NO");
    return 0;
}
