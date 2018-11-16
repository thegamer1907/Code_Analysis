#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        n = n - k * i;
    if (n >= 0)
        cout << "0";
    else
        cout << -n;
    return 0;
}