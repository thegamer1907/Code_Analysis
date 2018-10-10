#include <iostream>
#include <algorithm>

using namespace std;

int f(int x)
{
    if (x == 0)
        return 0;
    return x % 10 + f(x / 10);
}

int main()
{
    int k;
    cin >> k;
    for (int i = 1; ; i++)
        if (f(i) == 10)
        {
            k--;
            if (k == 0)
            {
                cout << i;
                return 0;
            }
        }
}