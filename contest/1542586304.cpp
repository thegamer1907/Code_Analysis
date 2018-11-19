#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

double h, m, s, t1, t2;
double a[10];
int main()
{
    cin >>a[1] >> a[2] >> a[3] >> a[4]>> a[5];
    a[1] = a[1]*5;
    a[4]= a[4]*5;
    a[5] = a[5]*5;
    t1 = max(a[4], a[5]);
    t2 = min(a[4], a[5]);
    int ans = 0;
    for (int i = 1; i <= 3; ++i)
    {
        if (a[i] >= t2 && a[i] < t1) ++ans;
    }
    if (ans == 3 || ans == 0) cout << "YES";
    else cout << "NO";
}
