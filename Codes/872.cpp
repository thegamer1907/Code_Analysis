#include <iostream>
using namespace std;
int main()
{
    long long two[55];
    long long n, k;
    two[0] = 1;
    for(int i =1; i < 55; ++i)
        two[i] = two[i - 1] * 2;
    while(cin >> n >> k)
    {
        --n;
        while(k != two[n])
        {
            k = two[n] - k % two[n];
            --n;
        }
        cout << n + 1 << endl;
    }
    return 0;
}