#include <iostream>
#include <math.h>
#define K 10000
using namespace std;

int a[10001], n = 0;

int intPow(int b, int e)
{
    if (e == 0) return 1;
    return intPow(b, e-1) * b;
}

void recur(int x, int maxPow, int repetitions, int previous, int sum)
{
    if (n > K)
        return;
    if (x == 0)
    {
        if(repetitions < 9)
           a[n++] = sum;
        return;
    }
    for(int i = 0; i <= maxPow; i++)
    {
        recur(x - 1, i, repetitions + (i == previous), i, sum + intPow(10, i));
    }
}

int main()
{
    recur(10, 7, 0, -1, 0);
    int k;
    cin >> k;
    cout << a[k-1] << endl;
    return 0;
}
