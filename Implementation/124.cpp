#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, step = 1, step_on;
    bool f = true;
    cin >> n >> a >> b;
    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
    while (n > pow(2, step))
        step += 1;
    step_on = step;
    while (f)
    {
        n = n / 2;
        if (a <= n && n < b)
        {
            if (step == step_on)
                cout << "Final!" << endl;
            else
                cout << step << endl;
            f = false;
        }
        else if (a > n)
        {
            a -= n;
            b -= n;
        }
        step -= 1;
    }
    return 0;
}
