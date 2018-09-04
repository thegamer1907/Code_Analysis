#include <iostream>

using namespace std;

int f[20 * 1000 * 1000];

int main()
{
    int k;
    cin >> k;
    for (int i = 1; ; i++)
    {
        f[i] = i % 10 + f[i / 10];
        if (f[i] == 10)
        {
            k--;
            if (k == 0)
            {
                cout << i;
                return 0;
            }
        }
    }
}