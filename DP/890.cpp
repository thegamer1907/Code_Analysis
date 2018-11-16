#include <iostream>

using namespace std;

int main()
{
    int n, a, x=0, y=0, z=-1;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            x += 1;
            if (y > 0)
            {
                y -= 1;
            }
        }
        else
        {
            y += 1;
            if (y > z)
            {
                z = y;
            }
        }
    }
    cout << x+z << endl;
}