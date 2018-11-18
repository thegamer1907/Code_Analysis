#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define S second
#define F first

using namespace std;

const int MAXN = 1e5 + 7;
const ll INF = 1e9 + 7;

int h,m,s,t1,t2;
int u[MAXN];

bool can (int a, int b, int c) {
    if (b < a)b += 3600 * 12;
    if (c < a)c += 3600 * 12;
    if (c > b)return true;
    else return false;
}

int main () {

    //freopen ("distance.in", "r", stdin);
    //freopen ("distance.out", "w", stdout);

    scanf ("%d%d%d%d%d",&h,&m,&s,&t1,&t2);

    h *= 3600;
    m *= 3600;
    s *= 3600;

    h = h + m / 60 + s / 3600;
    m = (m + (s / 60)) / 5;
    s = s / 5;

    h %= 3600 * 12;
    m %= 3600 * 12;
    s %= 3600 * 12;
    t1 = t1 % 12 * 3600;
    t2 = t2 % 12 * 3600;

    if (can(t1,t2,h) && can(t1,t2,m) && can(t1,t2,s)) {
        printf ("YES");
        return 0;
    }
    if (can(t2,t1,h) && can(t2,t1,m) && can(t2,t1,s)) {
        printf ("YES");
        return 0;
    }

    printf ("NO");

    return 0;
}
