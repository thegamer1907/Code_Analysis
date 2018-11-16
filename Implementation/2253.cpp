#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, n, w;
    long long s = 0;
    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++)
        s += (long long)k*i;
    cout << max(0ll, s - n);
}
