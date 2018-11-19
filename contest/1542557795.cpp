#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <iomanip>
#include <stack>
#include <deque>
#include <queue>
#include <string>
#include <string.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <ll, ll> pll;
typedef pair <ld, ld> pld;

const ll INF = 1e18;
const ll MAXN = 1e6;
const ll POLTOS = 50;
const ll SOTKA = 100;
const ll P = 1e9 + 7;
const ld pi = acos(-1);
const ld eps = 1e-7;
const ld base = 1e9 + 7;
const ll M = 1e3;

#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define ALL(a) a.begin(), a.end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string pas;
    ll n;

    cin >> pas >> n;
    bool flag1 = false, flag2 = false;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == pas)
            return cout << "YES", 0;
        if (s[0] == pas[1])
            flag2 = true;
        if (s[1] == pas[0])
            flag1 = true;
        if (flag1 && flag2)
            return cout << "YES", 0;
    }

    cout << "NO";
    return 0;

}
