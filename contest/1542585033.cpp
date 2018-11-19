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

int t1, t2, h, m, s;
int p1, p2;
vector <int> pos;

void init()
{
    scanf ("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
}

int get_position(int h, int m, int s, int p)
{
    if (p == 0)
    {
        return s * 12 * 60;
    }
    else if (p == 1)
    {
        return m * 12 * 60 + s;
    }
    else if (p == 2)
    {
        return h * 60 * 60 + m * 60 + s;
    }
    else
    {
        return 0;
    }
}

void solve()
{
    init();
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    p1 = get_position(t1, 0, 0, 2);
    p2 = get_position(t2, 0, 0, 2);
    for (int i = 0; i < 3; ++i)
    {
        pos.push_back(get_position(h, m, s, i));
    }
    pos.push_back(p1);
    pos.push_back(p2);
//    for (int i = 0; i < (int)pos.size(); ++i)
//    {
//        cerr << pos[i] << endl;
//    }
    sort(pos.begin(), pos.end());
    for (int i = 0; i + 1 < pos.size(); ++i)
    {
        if (pos[i] == p1 && pos[i + 1] == p2 || pos[i] == p2 && pos[i + 1] == p1)
        {
            printf("YES\n");
            return;
        }
    }
    if (pos.back() == p1 && pos[0] == p2 || pos.back() == p2 && pos[0] == p1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
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
