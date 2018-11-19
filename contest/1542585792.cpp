#include <iostream>
#include <cstring>
using namespace std;

int main() {
    double h , m , s , t1 , t2;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12) h = 0;
    s = s * 6;
    m = m * 6 + s / 60;
    h = h * 30 + m / 12;
    int flag = 0;
    t1 *= 30 , t2 *= 30;
    //cout << h << ' ' << m << ' ' << s << endl;
    if(t1 > t2) swap(t1 , t2);
    if(s <= t2 && s >= t1) flag++;
    if(h <= t2 && h >= t1) flag++;
    if(m <= t2 && m >= t1) flag++;
    if(flag == 3 || flag == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}