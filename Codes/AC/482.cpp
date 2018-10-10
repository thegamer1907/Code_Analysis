#include <iostream>
#include <math.h>
#define K 10000
using namespace std;

int n = 0;

int intPow(int base, int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}

void recur(int x, int maxPow, int repetition, int previous, int sum, int k)
{
    if (x == 0)
    {
        if (repetition > 1)
            if (++n == k)
                cout << sum;
        return;
    }
    for(int i = 0; i <= maxPow; i++)
        recur(x - 1, i, repetition + (i != previous), i, sum + intPow(10, i), k);
}

int main()
{
    int k;
    cin >> k;
    recur(10, 7, 0, -1, 0, k);
    return 0;
}
