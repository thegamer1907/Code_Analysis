#include <bits/stdc++.h>
using namespace std;

double max(double a, double b)
{
    return (a > b) ? a : b;
}

double min(double a, double b)
{
    return (a > b) ? b : a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    if (s > 0 || m > 0)
    {
        (h = h + 0.1);
        if (h > 12)
            h -= 12.0;
    }
    if(s>0)
    {
        m+=0.01;
        if(m>60)
            m-=60;
    }
    double a, b, c;
    a = min(h, min(m / 5.0, s / 5.0));
    c = max(h, max(m / 5.0, s / 5.0));
    b = (h + m / 5.0 + s / 5.0 - a - c);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    if (t1 < a)
    {
        if (t2 < a || t2 > c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO";
        }
    }
    else if (t1 > a && t1 < b)
    {
        if (t2 > a && t2 < b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO";
        }
    }

    else if (t1 > b && t1 < c)
    {
        if (t2 > b && t2 < c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (t1 > c)
    {
        if (t2 < a || t2 > c)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO";
    }
    return 0;
}