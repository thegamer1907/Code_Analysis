#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <string>

using namespace std;

#define MAXN 100010


int n, k;
string s;
int cnt[MAXN][3];
int res;



int main()
{
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < n; i++) 
    {
        cnt[i + 1][0] = cnt[i][0];
        cnt[i + 1][1] = cnt[i][1];
        cnt[i + 1][s[i] - 'a'] += 1;
    }
    
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        while (cnt[i][0] - cnt[j - 1][0] > k) j++;
        if (i - j + 1 > res) res = i - j + 1;
    }
    
    j = 1;
    for (int i = 1; i <= n; i++)
    {
        while (cnt[i][1] - cnt[j - 1][1] > k) j++;
        if (i - j + 1 > res) res = i - j + 1;
    }
    
    
    cout << res;
    return 0;
}
