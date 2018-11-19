
 #pragma comment(linker, "/STACK:66777216")

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <queue>

using namespace std;

const int N = 2e5 + 7;
const long double eps = 1e-10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h, m, s, t1, t2, x = 0, y = 0, z;
    cin >> h >> m >> s >> t1 >> t2;
    z = t1;
    int e1 = m / 5 + (m % 5 != 0 || (m % 5 == 0 && s != 0));
    if (e1 == 0){
        e1 = 12;
    }
    int e2 = s / 5 + (s % 5 != 0);
    if (e2 == 0){
        e2 = 12;
    }
    int e3 = h + (m + s != 0);
    if (e3 == 13){
        e3 = 1;
    }
    for (int i = 0; i <= 2000000; i ++){
        if (z == t2 && x == 0 && y == 0){
            return cout << "YES", 0;
        }
        y++;
        if (y == 60){
            y = 0;
            x++;
        }
        if (x == 60){
            x = 0;
            z++;
        }
        if (z == 13){
            z = 1;
        }
        if ((z == e1 || z == e2 || z == e3) && x == 0 && y == 0){
            break;
        }
        if (z == t2 && x == 0 && y == 0){
            return cout << "YES", 0;
        }
    }
    z = t1;
    x = y = 0;
    e3 = h;
    e2 = s / 5;
    if (e2 == 0){
        e2 = 12;
    }
    e1 = m / 5;
    if (e1 == 0){
        e1 = 12;
    }
    for (int i = 0; i <= 2000000; i ++){
        if (z == t2 && x == 0 && y == 0){
            return cout << "YES", 0;
        }
        y--;
        if (y == -1){
            y = 59;
            x--;
        }
        if (x == -1){
            x = 59;
            z--;
        }
        if (z == 0){
            z = 12;
        }
        if ((z == e1 || z == e2 || z == e3) && x == 0 && y == 0){
            break;
        }
        if (z == t2 && x == 0 && y == 0){
            return cout << "YES", 0;
        }
    }
    cout << "NO";
    return 0;
}

/*
*/
