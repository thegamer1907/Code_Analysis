#include <iostream>
#include <math.h>
#define K 10000
using namespace std;

int n = 0;

int intPow(int b, int e)
{
    if (e == 0) return 1;
    return intPow(b, e-1) * b;
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
    {
        recur(x - 1, i, repetition + (i != previous), i, sum + intPow(10, i), k);
    }
}

int main()
{
    int k;
    cin >> k;
    recur(10, 7, 0, -1, 0, k);
    return 0;
}
