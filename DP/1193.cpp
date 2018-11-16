
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int val = 0;

    int a, highest, currentFlip, hN0, hN1, num0, num1;
    highest = currentFlip = hN0 = hN1 = num0 = num1 = 0;

    if (n==1)
    {
        cin >> a;
        if (a == 0)
            cout << 1;
        else cout << 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cin>>a;

            if (a==1)
            {
                currentFlip--;
                num1++;
                val++;
            }
            else
            {
                currentFlip++;
                num0++;
            }

            if (currentFlip < 0)
            {
                currentFlip = 0;
                num1 = 0;
                num0 = 0;
            }

            if (currentFlip > highest)
            {
                highest = currentFlip;
                hN0 = num0;
                hN1 = num1;
            }
        }

        if (highest == 0) val = val - 1;

        cout << max(val, val - hN1 + hN0);
    }
    return 0;
}
