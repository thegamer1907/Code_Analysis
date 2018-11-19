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

ll n, ans, h, m, s, t1, t2;
bool dog, k[MAXN];
double a1, a2, a3;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> h >> m >> s >> t1 >> t2;
    t1 %= 12;
    t2 %= 12;
    h %= 12;
    h = 3600 * h + 60 * m + s;
    m = 60 * 12 * m + 12 * s;
    s = s * 60 * 12;
    t1 = 3600 * t1;
    t2 = 3600 * t2;
    k[h] = 1;
    k[m] = 1;
    k[s] = 1;
    dog = 0;
 //   cout << h << ' ' << m << ' ' << s <<  ' ' << t1 << ' '<< t2 << endl;
    for(int i = t1; i != t2; i = (i + 1) % (3600 * 12))
    {
        if(k[i])
            dog = 1;
    }
    if(!dog)
    {
        cout << "YES";
        return 0;
    }
    for(int i = t1; i != t2; i = (i + 43199) % (3600 * 12))
    {
        if(k[i])
            dog = 0;
    }
    if(dog)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
