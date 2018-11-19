// Example program
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    double n, m, k, a, b;
    cin >> n >> m >> k >> a >> b;
    n *= 5;
    a *= 5;
    b *= 5;
    if (a >= 60)
        a -= 60;
    if (b >= 60)
        b -= 60;
    if (n >= 60)
        n -= 60;
    if (k > 0 || m > 0)
        n += 0.5;
    if (k > 0) 
        m += 0.5;
    if (a > b)
        swap(a, b);
    int x = 0;
    if (n > a && n < b)
        x++;
    if (m > a && m < b)
        x++;
    if (k > a && k < b)
        x++;
    if (x == 0 || x == 3)
        cout << "YES";
    else
        cout << "NO";
}