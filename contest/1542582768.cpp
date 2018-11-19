#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool available(double t1, double t2, double r1, double r2, double r3){
    if (t1 > r1 && t1 < r2 && t2 > r1 && t2 < r2) return true;
    if (t1 > r2 && t1 < r3 && t2 > r2 && t2 < r3) return true;
    if ((t1 > r3 || t1 < r1) && (t2 > r3 || t2 < r1)) return true;
    return false;
}


int main(){
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    double hh = h + m / 60.0 + s / 3600.0;
    double mm = m / 5.0 + s / 300.0;
    double ss = s / 5.0;
    double r1 = min(hh, min(mm, ss));
    double r3 = max(hh, max(mm, ss));
    double r2 = hh + mm + ss - r1 - r3;
    if (available(t1, t2, r1, r2, r3)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}

