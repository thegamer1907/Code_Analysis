#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    int v[]{100, 20, 10, 5, 1};
    for(int i=0; i<5; i++)
    {
        res += n / v[i];
        n -= v[i] * (n/v[i]);
    }
    cout << res << "\n";
    return 0;
}
