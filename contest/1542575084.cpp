#include <bits/stdc++.h>

using namespace std;

int p[5], t1, t2;

int main() {
    scanf("%d %d %d %d %d", &p[0], &p[1], &p[2], &t1, &t2);
    if (p[0] == 12) p[0] = 0;
    p[0] *= 5*60*60; p[1] *= 60*60; p[2] *= 60*60;
    p[0] += p[1] / 12;
    p[0] += p[2] / 12 / 60;
    p[1] += p[2] / 60;
    set < int > lft;

    for (int i = 0; i < 3; i++) lft.insert(p[i]);

    t1 *= 5*60*60; t2 *= 5*60*60;
    bool valid = false;

    int x = t1;
    bool f = true;
    while (1) {
        if (x == t2) valid = true;
        if (!f && lft.count(x)) break;
        if (x == 3600*60) x = 0;
        else x++;
        f = false;
    }

    x = t1;
    f =  true;
    while (1) {
        if (x == t2) valid = true;
        if (!f && lft.count(x)) break;
        if (x == 0) x = 3600*60;
        else x--;
        f = false;
    }

    if (valid) printf("YES\n");
    else printf("NO\n");

    return 0;
}