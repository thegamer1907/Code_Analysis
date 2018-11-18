#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

string a[120];

int main(){
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h  %= 12;
    t1 %= 12;
    t2 %= 12;
    int a[5], x = t1*30*360, y = t2*30*360;
    a[0] = s * 6 * 360;
    a[1] = m * 6 * 360 + s * 36;
    a[2] = h * 30 * 360 + m * 36 + s;
    sort(a, a + 3);
    int flag = 0, ans = 0;
    if ( (x >= a[0] && x < a[1]) ) flag = 1;
    else if ( (x >= a[1] && x < a[2]) ) flag = 2;
    else flag = 3;
    if ((y >= a[0] && y < a[1])) ans = (flag == 1);
    else if ( (y >= a[1] && y < a[2]) ) ans = (flag == 2);
    else ans = (flag == 3);
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
