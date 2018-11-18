#include <bits/stdc++.h>

using namespace std;

void solution() {
    int h, m, s, t1, t2, p1, p2, p3, q1, q2;
    cin >> h >> m >> s >> t1 >> t2;


    if (h == 12) {
        p1 = 1;
        if (m > 0 || s > 0) p1++;
    } else {
        p1 = h * 2 + 1;
        if (m > 0 || s > 0)
            p1++;
    }

    if (m == 0) {
        p2 = 1;
        if (s > 0) p2++;
    } else {
        p2 = 2 * (m / 5) + 2;
        if (m % 5 == 0 && s == 0) p2--;
    }


    if (s == 0)
        p3 = 1;
    else {
        p3 = 2 * (s / 5) + 2;
        if (s % 5 == 0) p3--;
    }



    if (t1 == 12) q1 = 1; else
        q1 = t1 * 2 + 1;

    if (t2 == 12) q2 = 1; else
        q2 = t2 * 2 + 1;


    if (q2 < q1)
        swap(q1, q2);

    int cnt = 0;
    for (int i = q1+1; i < q2; i++) {
        if (p1 == i)
            cnt++;
        if (p2 == i)
            cnt++;
        if (p3 == i)
            cnt++;
    }


    if (cnt == 0 || cnt == 3)
        cout << "YES";
    else
        cout << "NO";



}


int main()
{
    solution();
    return 0;
}
