#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <cstdio>
#include <iterator>
#include <utility>
#include <iomanip>
#include <map>
#include <set>
//#include <bits/stdc++.h>

#define mp make_pair
#define fi first
#define se second
#define po_ba(x) pop_back(x)
#define pu_ba(x) push_back(x)
#define ba(x) back(x)
typedef long long ll;
using namespace std;

const ll maxLL = 1e18;
const ll maxL = 4294967296LL;
const ll maxI = 32767LL;
const ll maxB = 255LL;
const double pi = atan(1)*4;

ll t1, t2, h, m, s, i, ol[4];
double a, b, c;

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen ("A.in", "r", stdin);
    //freopen ("A.out", "w", stdout);

    cin >> h >> m >> s >> t1 >> t2; t1 %= 12; t2 %= 12;
    if (h == 12)h = 0;
    if (m || s)a = h + 0.5; else a = h;
    if (m % 5 || s)b = m/5 + 0.5; else b = m/5;
    if (s % 5)c = s/5 + 0.5; else c = s/5;

    if (a > b)swap(a, b);
    if (b > c)swap(c, b);
    if (a > b)swap(a, b);
    if (b > c)swap(c, b);
    if (a > b)swap(a, b);
    if (b > c)swap(c, b);
    if (a > b)swap(a, b);
    if (b > c)swap(c, b);

    //cout  << a << " " << b << " " << c << " ";

    if (t1 > a && t1 < b && t2 > a && t2 < b){
        cout << "YES"; return 0;
    }

    if (t1 > b && t1 < c && t2 > b && t2 < c){
        cout << "YES"; return 0;
    }

    if (t1 > t2)swap(t1, t2);

    if (a > t1 && a < t2 && b > t1 && b < t2 && c > t1 && c < t2){
        cout << "YES"; return 0;
    }

    if (t1 > c || t2 < a){
        cout << "YES"; return 0;
    }

    cout << "NO";
    return 0;
}
