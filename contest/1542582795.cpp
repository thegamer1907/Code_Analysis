#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i, a, b) for(int i = a; i < b; i++)
#define PER(i, a, b) for(int i = b-1; i >= a; i--)

const int maxn = 100 + 10;

int angle1, angle2, angleh, anglem, angles;

bool in(int x) {
    return angle1 < x && x < angle2;
}

int main()
{
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    bool f = false;
    if(m || s) f = true;
    angle1 = t1 * 30; angle2 = t2 * 30;
    if(t1 == 12) angle1 = 0;
    if(t2 == 12) angle2 = 0;
    angleh = h * 30;
    if(h == 12) angleh = 0;
    if(f) angleh++;
    anglem = m * 6;
    if(s) anglem++;
    angles = s * 6;

    if(angle1 > angle2) swap(angle1, angle2);
    if(in(angleh) && in(anglem) && in(angles)) {
        printf("YES\n");
    } else if(!in(angleh) && !in(anglem) && !in(angles)) {
        printf("YES\n");
    } else printf("NO\n");

    return 0;
}
