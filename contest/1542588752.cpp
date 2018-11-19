#include <bits/stdc++.h>

#define INF 1000000010
#define INFLL ((1LL<<62)-5)
#define FO(i,a,b) for (int (i) = (a); (i) < (b); ++(i))
#define OF(i,a,b) for (int (i) = (a)-1; (i) >= (b); --(i))
#define SZ(v) int(v.size())

using namespace std;
//PAIRS:
#define mp make_pair
#define fi first
#define se second
typedef pair<int,int> pii;
typedef long long ll;

/*~~~~TEMPLATE END~~~~*/

const int NTICKS = 12*60*60;
int h, m, s, t1, t2;
bool blocked[NTICKS+5];
bool blockedgap[NTICKS+5];

int main() {
    scanf ("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    h = (60*60*h + 60*m + s) % NTICKS;
    m = (12*60*m + 12*s) % NTICKS;
    s = (12*60*s) % NTICKS;
    t1 = (60*60*t1) % NTICKS;
    t2 = (60*60*t2) % NTICKS;
    //printf ("%d %d %d %d %d\n", h, m, s, t1, t2);
    blocked[h] = blocked[m] = blocked[s] = true;

    int cT = t1;
    while (true) {
        if (cT == t2) {
            printf ("YES\n");
            return 0;
        }
        if (blocked[cT]) break;
        cT = (cT+1)%NTICKS;
    }

    cT = t1;
    while (true) {
        if (cT == t2) {
            printf ("YES\n");
            return 0;
        }
        if (blocked[cT]) break;
        cT = (cT-1+NTICKS)%NTICKS;
    }
    printf ("NO\n");
    return 0;
}
