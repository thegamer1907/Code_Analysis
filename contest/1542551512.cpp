#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ar[1300];

int main()
{
    double t1, t2, s, m, h, sec, min, hour, i, j, a, b ,c, ghonta[3];
    cin >> h >> m >> s >> t1 >> t2;
    sec = (s / 60) * 12;
    min = (((s / 60) + m) / 60) * 12;
    hour = h + (min / 60);
    if(hour > 12)hour -= 12;
    if(min > 12)min -= 12;
    if(sec > 12)sec -= 12;

    ghonta[0] = hour;
    ghonta[1] = min;
    ghonta[2] = sec;

    sort(ghonta, ghonta+3);

    if((t1 >= ghonta[0] && t1 <= ghonta[1]) && (t2 >= ghonta[0] && t2 <= ghonta[1])){
        cout << "yEs";
    }

    else if((t1 >= ghonta[1] && t1 <= ghonta[2]) && (t2 >= ghonta[1] && t2 <= ghonta[2])){
        cout << "yEs";
    }

    else if((((t1<ghonta[0]) ? t1+12 : t1) >= ghonta[2] && ((t1<ghonta[0]) ? t1+12 : t1)  <= ghonta[0]+12) && (((t2<ghonta[0]) ? t2+12 : t2)  >= ghonta[2] && ((t2<ghonta[0]) ? t2+12 : t2) <= ghonta[0]+12)){
        cout << "yEs";
    }

    else cout << "nO";

    return 0;
}