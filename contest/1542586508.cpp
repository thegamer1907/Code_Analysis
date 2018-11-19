#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>
#include <set>
#include <map>
#include <string>

using namespace std;

int h, m, s, t1, t2;
double hh, mm, ss, tt1, tt2;


bool check(double x)
{
    if(x < tt2 && x > tt1) return false;
    else return true;
}

int main(){
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12) h = 0;
    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;

    hh = h * 1.0 / 12 * 360; mm = m * 1.0 / 60 * 360; ss = s * 1.0 / 60 * 360;
    tt1 = t1 * 1.0 / 12 * 360; tt2 = t2 * 1.0 / 12 * 360;
    int ok = 0;
    if(s != 0 || m != 0) hh += 0.5;
    if(s != 0) mm += 0.5;
    //cout << t1 << ' ' << t2 << ' ' << tt1 << ' ' << tt2 << endl;
    if(tt1 > tt2) swap(tt1,tt2);
    //printf("%.3lf %.3lf %.3lf %.3lf %.3lf\n",hh,mm,ss,tt1,tt2);
    if(check(hh) && check(mm) && check(ss)) ok = 1;
    //cout << ok << endl;
    if(!check(hh) && !check(mm) && !check(ss)) ok = 1;
    printf("%s\n", ok ? "YES" : "NO");
}
