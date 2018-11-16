#include <bits/stdc++.h>

using namespace std;

int n, s; string a;
int main()
{
    cin >> a; n = a.length();
    if (n < 7) {cout << "NO"; return 0;}
    s = 0;
    for (int i = 0; i <= n-6; i++)
    {if ((a[i] == a[i+1]) && (a[i+1] == a[i+2]) && (a[i+2] == a[i+3]) && (a[i+3] == a[i+4]) && (a[i+4] == a[i+5]) && (a[i+5] == a[i+6])) {s += 1; break;};}
    if (s > 0) {cout << "YES";} else {cout << "NO";}
}
