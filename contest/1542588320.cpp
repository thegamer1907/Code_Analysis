
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int br= 0,bl = 0;



int main()
{
    int h,m, s,t1,t2;
    cin >> h>>m>>s >> t1 >> t2;
    if(h == 12)
        h = 0;
    if(t1 == 12)
        t1 = 0;

    if(t2 == 12)
        t2 = 0;

    if(t1 > t2)
        swap(t1,t2);

    if(t1 <= h && h < t2)
        br = 1;
    else
        bl= 1;

    if(t1*5 <= m && m < 5*t2)
        br = 1;
    else
        bl= 1;

    if(t1*5 <= s && s < 5*t2)
        br = 1;
    else
        bl= 1;
    if(bl == 1 && br == 1)
        cout << "NO";
    else
        cout << "YES";

}
