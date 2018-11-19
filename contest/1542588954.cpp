#pragma comment(linker, "/STACK:256000000")
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <memory.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>
#include <random>
#include <bitset>

using namespace std;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int, int> pii;
typedef pair<int64, int64> pll;
const int INF = (int)(1e9 + 1e6);
const int64 LINF = (int64)(4e18);
const double EPS = 1e-9;
mt19937 ggen;

const int MOD = 1000000007;

int add(int a, int b, int m = MOD)
{
    int res = a + b;
    if (res >= m)
        res -= m;
    return res;
}

int sub(int a, int b, int m = MOD)
{
    int res = a - b;
    if (res < 0)
        res += m;
    return res;
}

int mul(int a, int b, int m = MOD)
{
    return (int64)a * b % m;
}

const int MAXN = 150;

string pass;
int n;
string s[MAXN];

void init()
{
    cin >> pass;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
}

bool find_solution()
{
    bool found = true;
    for (int i = 0; i < (int)pass.size(); i += 2)
    {
        bool f = false;
        string cur = pass.substr(i, 2);
        //cerr  << cur << endl;
        for (int j = 0; j < n; ++j)
        {
            if (s[j].substr(0, cur.size()) == cur)
            {
                f = true;
                break;
            }
        }
        if (!f)
        {
            found = false;
            break;
        }
    }
    return found;
}

void solve()
{
    init();
    bool found = find_solution();
    if (found)
    {
        cout << "YES\n";
        return;
    }
    found = false;
    for (int i = 0; i < n; ++i)
    {
        if (s[i][1] == pass[0])
        {
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "NO\n";
        return;
    }
    pass.erase(pass.begin());
    found = find_solution();
    if (found)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main()
{
    iostream::sync_with_stdio(false); cin.tie(0);
#ifdef _MY_DEBUG
    freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif
    ggen = mt19937(1337);

    solve();

    return 0;
}
